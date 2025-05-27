
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CalcLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, INT = 2, NAME = 3, PLUS = 4, MINUS = 5, MUL = 6, DIV = 7, EQ = 8, 
    BAND = 9, BOR = 10, BNOT = 11, BEQ = 12, BNEQ = 13, BLT = 14, BRT = 15, 
    BLTE = 16, BRTE = 17, DOT = 18, COMMA = 19, LBRACKET = 20, RBRACKET = 21, 
    LFBRACKET = 22, RFBRACKET = 23, SEP = 24
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

