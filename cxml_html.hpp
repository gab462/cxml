#ifndef INCLUDE_CXML_HTML_HPP
#define INCLUDE_CXML_HTML_HPP

#include <utility>
#include "cxml.hpp"

namespace cxml {

    struct html: tree {
        template<typename... Args>
        html(Args&&... args): tree{"html", std::forward<Args>(args)...} {}
    };

    struct head: tree {
        template<typename... Args>
        head(Args&&... args): tree{"head", std::forward<Args>(args)...} {}
    };

    struct body: tree {
        template<typename... Args>
        body(Args&&... args): tree{"body", std::forward<Args>(args)...} {}
    };

    struct div: tree {
        template<typename... Args>
        div(Args&&... args): tree{"div", std::forward<Args>(args)...} {}
    };

    struct header: tree {
        template<typename... Args>
        header(Args&&... args): tree{"header", std::forward<Args>(args)...} {}
    };

    struct footer: tree {
        template<typename... Args>
        footer(Args&&... args): tree{"footer", std::forward<Args>(args)...} {}
    };

    struct nav: tree {
        template<typename... Args>
        nav(Args&&... args): tree{"nav", std::forward<Args>(args)...} {}
    };

    struct main: tree {
        template<typename... Args>
        main(Args&&... args): tree{"main", std::forward<Args>(args)...} {}
    };

    struct article: tree {
        template<typename... Args>
        article(Args&&... args): tree{"article", std::forward<Args>(args)...} {}
    };

    struct section: tree {
        template<typename... Args>
        section(Args&&... args): tree{"section", std::forward<Args>(args)...} {}
    };

    struct ol: tree {
        template<typename... Args>
        ol(Args&&... args): tree{"ol", std::forward<Args>(args)...} {}
    };

    struct ul: tree {
        template<typename... Args>
        ul(Args&&... args): tree{"ul", std::forward<Args>(args)...} {}
    };

    struct table: tree {
        template<typename... Args>
        table(Args&&... args): tree{"table", std::forward<Args>(args)...} {}
    };

    struct thead: tree {
        template<typename... Args>
        thead(Args&&... args): tree{"thead", std::forward<Args>(args)...} {}
    };

    struct tbody: tree {
        template<typename... Args>
        tbody(Args&&... args): tree{"tbody", std::forward<Args>(args)...} {}
    };

    struct tfoot: tree {
        template<typename... Args>
        tfoot(Args&&... args): tree{"tfoot", std::forward<Args>(args)...} {}
    };

    struct tr: tree {
        template<typename... Args>
        tr(Args&&... args): tree{"tr", std::forward<Args>(args)...} {}
    };

    struct title: content {
        title(std::string_view text): content{"title", text} {}
    };

    struct h1: content {
        h1(std::string_view text): content{"h1", text} {}
    };

    struct p: content {
        p(std::string_view text): content{"p", text} {}
    };

    struct pre: content {
        pre(std::string_view text): content{"pre", text} {}
    };

    struct code: content {
        code(std::string_view text): content{"code", text} {}
    };

    struct button: content {
        button(std::string_view text): content{"button", text} {}
    };

    struct li: content {
        li(std::string_view text): content{"li", text} {}
    };

    struct th: content {
        th(std::string_view text): content{"th", text} {}
    };

    struct td: content {
        td(std::string_view text): content{"td", text} {}
    };

    struct meta: self_closing {
        meta(): self_closing{"meta"} {}
    };

    struct link: self_closing {
        link(): self_closing{"link"} {}
    };

    struct img: self_closing {
        img(): self_closing{"img"} {}
    };

}

#endif
