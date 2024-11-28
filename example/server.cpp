// https://github.com/picocss/examples/blob/master/v2-html-classless/index.html

#include <print>
#include <utility>
#include "cpp-httplib/httplib.h"
#include "../cxml_html.hpp"

auto main() -> int {
    httplib::Server server;

    server.Get("/", [](const httplib::Request&, httplib::Response& res) {
        using namespace cxml;

        meta theme;
        theme.attributes["name"] = "colorscheme";
        theme.attributes["content"] = "light dark";

        cxml::link style;
        style.attributes["rel"] = "stylesheet";
        style.attributes["href"] = "https://cdn.jsdelivr.net/npm/@picocss/pico@2/css/pico.classless.min.css";

        a home_button { "Home" };
        home_button.attributes["href"] = "/";

        a articles_button { "Articles" };
        articles_button.attributes["href"] = "/articles";

        a contact_button { "Contact" };
        contact_button.attributes["href"] = "/contact";

        a pico { "Pico" };
        pico.attributes["href"] = "https://picocss.com";

        html doc {
            head {
                std::move(theme),
                std::move(style),
                title { "CXML example" }
            },
            body {
                header {
                    hgroup {
                        h1 { "CXML example" },
                        p { "Github: gab462/cxml" }
                    },
                    nav {
                        ul {
                            li { home_button.render() },
                            li { articles_button.render() },
                            li { contact_button.render() }
                        }
                    }
                },
                cxml::main {
                    article {
                        h2 { "Hello, World!" },
                        p { "Nullam dui arcu, malesuada et sodales eu, efficitur vitae dolor. Sed ultricies dolor non ante vulputate hendrerit. Vivamus sit amet suscipit sapien. Nulla iaculis eros a elit pharetra egestas. Nunc placerat facilisis cursus. Sed vestibulum metus eget dolor pharetra rutrum." },
                        blockquote {
                            span { "\"Maecenas vehicula metus tellus, vitae congue turpis hendrerit non. Nam at dui sit amet ipsum cursus ornare.\"" },
                            footer {
                                cite { "- Phasellus eget lacinia" }
                            }
                        },
                        footer {
                            small { "Duis nec elit placerat, suscipit nibh quis, finibus neque." }
                        }
                    }
                },
                footer {
                    small {
                        std::string{"Built with "} + pico.render()
                    }
                }
            }
        };

        res.set_content(std::string{"<!DOCTYPE html>"} + doc.render(), "text/html");
    });

    constexpr int port = 8080;
    std::println("Listening on port {}...", port);
    server.listen("0.0.0.0", port);

    return 0;
}
