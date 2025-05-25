#include "empty.hpp"

#include <iostream>

void MyListener::enterExpr(MyGrammarParser::ExprContext* ctx) {
    // ctx->INT() возвращает токен INT
    std::cout << "Number found: " << ctx->INT()->getText() << std::endl;
}