#ifndef INCLUDE_CXML_HPP
#define INCLUDE_CXML_HPP

#include <array>
#include <memory>
#include <sstream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace cxml {

    struct node {
        std::string_view tag;
        std::unordered_map<std::string, std::string> attributes;

        node(std::string_view name): tag{name} {}

        virtual auto render() -> std::string = 0;

        template<typename T>
        static auto from(T&& t) -> std::unique_ptr<node> {
            return std::make_unique<T>(std::forward<T>(t));
        }

        virtual ~node() {};
    };

    struct self_closing: node {
        self_closing(std::string_view name): node{name} {}

        auto render() -> std::string override {
            std::stringstream ss;

            ss << "<" << tag;

            for (auto& [k, v]: attributes) {
                ss << " " << k << "=\"" << v << "\"";
            }

            ss << " />";

            return ss.str();
        }
    };

    struct content: node {
        std::string text;

        content(std::string_view name, std::string_view txt): node{name}, text{txt} {}

        auto render() -> std::string override {
            std::stringstream ss;

            ss << "<" << tag;

            for (auto& [k, v]: attributes) {
                ss << " " << k << "=\"" << v << "\"";
            }

            ss << ">" << text << "</" << tag << ">";

            return ss.str();
        }
    };

    // Moving into vector
    // https://stackoverflow.com/a/42915152
    template<typename T, std::size_t N>
    inline auto make_vector(std::array<T,N>&& a) -> std::vector<T> {
        return {std::make_move_iterator(std::begin(a)), std::make_move_iterator(std::end(a))};
    }

    template<typename... Args>
    inline auto make_vector(Args&&... args) {
        return make_vector(std::to_array({std::forward<Args>(args)...}));
    }

    struct tree: node {
        std::vector<std::unique_ptr<node>> children;

        template<typename... Args>
        tree(std::string_view name, Args&&... args)
            : node{name}, children{make_vector(node::from(std::forward<Args>(args))...)} {}

        auto render() -> std::string override {
            std::stringstream ss;

            ss << "<" << tag;

            for (auto& [k, v]: attributes) {
                ss << " " << k << "=\"" << v << "\"";
            }

            ss << ">";

            for (auto& child: children) {
                ss << child->render();
            }

            ss << "</" << tag << ">";
            return ss.str();
        }
    };

}

#endif
