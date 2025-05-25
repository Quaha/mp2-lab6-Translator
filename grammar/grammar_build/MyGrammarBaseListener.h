
// Generated from MyGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarListener.h"


/**
 * This class provides an empty implementation of MyGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MyGrammarBaseListener : public MyGrammarListener {
public:

  virtual void enterProgram(MyGrammarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(MyGrammarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterExpr(MyGrammarParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(MyGrammarParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

