#pragma once
#include "MyGrammarBaseListener.h"

class MyListener : public MyGrammarBaseListener {
public:
    void enterExpr(MyGrammarParser::ExprContext* ctx) override;
};
