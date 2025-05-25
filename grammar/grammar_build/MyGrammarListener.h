
// Generated from MyGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MyGrammarParser.
 */
class  MyGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(MyGrammarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(MyGrammarParser::ProgramContext *ctx) = 0;

  virtual void enterExpr(MyGrammarParser::ExprContext *ctx) = 0;
  virtual void exitExpr(MyGrammarParser::ExprContext *ctx) = 0;


};

