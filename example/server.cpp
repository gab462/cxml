#include "cpp-httplib/httplib.h"
#include "../cxml_html.hpp"

auto main() -> int {
    httplib::Server server;

    server.Get("/", [](const httplib::Request&, httplib::Response& res) {
        cxml::meta theme;
        theme.attributes["name"] = "colorscheme";
        theme.attributes["content"] = "light dark";

        cxml::link style;
        style.attributes["rel"] = "stylesheet";
        style.attributes["href"] = "https://cdn.jsdelivr.net/npm/@picocss/pico@2/css/pico.classless.min.css";

        cxml::html doc {
            cxml::head {
                std::move(theme),
                std::move(style),
                cxml::title { "CXML example" }
            },
            cxml::body {
                cxml::main {
                    cxml::h1 { "Hello, World!" }
                }
            }
        };

        res.set_content(std::string{"<!DOCTYPE html>"} + doc.render(), "text/html");
    });

    server.listen("0.0.0.0", 8080);

    return 0;
}
