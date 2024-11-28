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

    struct hgroup: tree {
        template<typename... Args>
        hgroup(Args&&... args): tree{"hgroup", std::forward<Args>(args)...} {}
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

    struct blockquote: tree {
        template<typename... Args>
        blockquote(Args&&... args): tree{"blockquote", std::forward<Args>(args)...} {}
    };

    struct form: tree {
        template<typename... Args>
        form(Args&&... args): tree{"form", std::forward<Args>(args)...} {}
    };

    struct fieldset: tree {
        template<typename... Args>
        fieldset(Args&&... args): tree{"fieldset", std::forward<Args>(args)...} {}
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

    struct figure: tree {
        template<typename... Args>
        figure(Args&&... args): tree{"figure", std::forward<Args>(args)...} {}
    };

    struct figcaption: tree {
        template<typename... Args>
        figcaption(Args&&... args): tree{"figcaption", std::forward<Args>(args)...} {}
    };

    struct select: tree {
        template<typename... Args>
        select(Args&&... args): tree{"select", std::forward<Args>(args)...} {}
    };

    struct legend: tree {
        template<typename... Args>
        legend(Args&&... args): tree{"legend", std::forward<Args>(args)...} {}
    };

    struct details: tree {
        template<typename... Args>
        details(Args&&... args): tree{"details", std::forward<Args>(args)...} {}
    };

    struct progress: tree {
        template<typename... Args>
        progress(Args&&... args): tree{"progress", std::forward<Args>(args)...} {}
    };

    struct dialog: tree {
        template<typename... Args>
        dialog(Args&&... args): tree{"dialog", std::forward<Args>(args)...} {}
    };

    struct span: content {
        span(std::string_view text): content{"span", text} {}
    };

    struct title: content {
        title(std::string_view text): content{"title", text} {}
    };

    struct a: content {
        a(std::string_view text): content{"a", text} {}
    };

    struct h1: content {
        h1(std::string_view text): content{"h1", text} {}
    };

    struct h2: content {
        h2(std::string_view text): content{"h2", text} {}
    };

    struct h3: content {
        h3(std::string_view text): content{"h3", text} {}
    };

    struct h4: content {
        h4(std::string_view text): content{"h4", text} {}
    };

    struct h5: content {
        h5(std::string_view text): content{"h5", text} {}
    };

    struct h6: content {
        h6(std::string_view text): content{"h6", text} {}
    };

    struct strong: content {
        strong(std::string_view text): content{"strong", text} {}
    };

    struct em: content {
        em(std::string_view text): content{"em", text} {}
    };

    struct u: content {
        u(std::string_view text): content{"u", text} {}
    };

    struct ins: content {
        ins(std::string_view text): content{"ins", text} {}
    };

    struct del: content {
        del(std::string_view text): content{"del", text} {}
    };

    struct sub: content {
        sub(std::string_view text): content{"sub", text} {}
    };

    struct sup: content {
        sup(std::string_view text): content{"sup", text} {}
    };

    struct small: content {
        small(std::string_view text): content{"small", text} {}
    };

    struct s: content {
        s(std::string_view text): content{"s", text} {}
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

    struct cite: content {
        cite(std::string_view text): content{"cite", text} {}
    };

    struct abbr: content {
        abbr(std::string_view text): content{"abbr", text} {}
    };

    struct kbd: content {
        kbd(std::string_view text): content{"kbd", text} {}
    };

    struct mark: content {
        mark(std::string_view text): content{"mark", text} {}
    };

    struct summary: content {
        summary(std::string_view text): content{"summary", text} {}
    };

    struct label: content {
        label(std::string_view text): content{"label", text} {}
    };

    struct option: content {
        option(std::string_view text): content{"option", text} {}
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

    struct input: self_closing {
        input(): self_closing{"input"} {}
    };

}

#endif
