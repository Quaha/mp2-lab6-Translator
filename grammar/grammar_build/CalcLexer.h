
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CalcLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, INT = 2, IF = 3, ELSE = 4, WHILE = 5, EQ = 6, NAME = 7, PLUS = 8, 
    MINUS = 9, MUL = 10, DIV = 11, MDIV = 12, BAND = 13, BOR = 14, BNOT = 15, 
    BEQ = 16, BNEQ = 17, BLT = 18, BRT = 19, BLTE = 20, BRTE = 21, DOT = 22, 
    COMMA = 23, LBRACKET = 24, RBRACKET = 25, LFBRACKET = 26, RFBRACKET = 27, 
    SEP = 28
  };

  explicit CalcLexer(antlr4::CharStream *input);

  ~CalcLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

