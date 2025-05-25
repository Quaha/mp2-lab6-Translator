
// Generated from MyGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarVisitor.h"


/**
 * This class provides an empty implementation of MyGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MyGrammarBaseVisitor : public MyGrammarVisitor {
public:

  virtual std::any visitProgram(MyGrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(MyGrammarParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

