
// Generated from MyGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MyGrammarParser.
 */
class  MyGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MyGrammarParser.
   */
    virtual std::any visitProgram(MyGrammarParser::ProgramContext *context) = 0;

    virtual std::any visitExpr(MyGrammarParser::ExprContext *context) = 0;


};

