#include "empty.hpp"

#include <iostream>

void MyListener::enterExpr(MyGrammarParser::ExprContext* ctx) {
    // ctx->INT() ���������� ����� INT
    std::cout << "Number found: " << ctx->INT()->getText() << std::endl;
}