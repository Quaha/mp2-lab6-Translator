
// Generated from Calc.g4 by ANTLR 4.13.1


#include "CalcListener.h"
#include "CalcVisitor.h"

#include "CalcParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcParserStaticData final {
  CalcParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcParserStaticData(const CalcParserStaticData&) = delete;
  CalcParserStaticData(CalcParserStaticData&&) = delete;
  CalcParserStaticData& operator=(const CalcParserStaticData&) = delete;
  CalcParserStaticData& operator=(CalcParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcParserStaticData *calcParserStaticData = nullptr;

void calcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcParserStaticData>(
    std::vector<std::string>{
      "pstart", "program", "line", "expr", "oexpr", "variable", "term", 
      "primary", "factor", "function", "number"
    },
    std::vector<std::string>{
      "", "", "", "'if'", "'else'", "'while'", "'='", "", "'+'", "'-'", 
      "'*'", "'/'", "'%'", "'&&'", "'||'", "'!'", "'=='", "'!='", "'<'", 
      "'>'", "'<='", "'>='", "'.'", "','", "'('", "')'", "'{'", "'}'", "';'"
    },
    std::vector<std::string>{
      "", "WS", "INT", "IF", "ELSE", "WHILE", "EQ", "NAME", "PLUS", "MINUS", 
      "MUL", "DIV", "MDIV", "BAND", "BOR", "BNOT", "BEQ", "BNEQ", "BLT", 
      "BRT", "BLTE", "BRTE", "DOT", "COMMA", "LBRACKET", "RBRACKET", "LFBRACKET", 
      "RFBRACKET", "SEP"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,163,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,1,1,1,1,1,5,1,28,8,1,10,1,12,
  	1,31,9,1,1,1,3,1,34,8,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,3,3,50,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,3,3,65,8,3,1,4,1,4,1,4,1,4,3,4,71,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,5,4,103,8,4,10,4,12,4,106,9,4,1,5,1,5,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,122,8,6,10,6,12,6,125,9,6,1,
  	7,1,7,1,7,1,7,1,7,3,7,132,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,141,8,8,
  	1,9,1,9,1,9,1,9,1,9,5,9,148,8,9,10,9,12,9,151,9,9,3,9,153,8,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,3,10,161,8,10,1,10,0,2,8,12,11,0,2,4,6,8,10,12,14,
  	16,18,20,0,0,179,0,22,1,0,0,0,2,29,1,0,0,0,4,35,1,0,0,0,6,64,1,0,0,0,
  	8,70,1,0,0,0,10,107,1,0,0,0,12,109,1,0,0,0,14,131,1,0,0,0,16,140,1,0,
  	0,0,18,142,1,0,0,0,20,160,1,0,0,0,22,23,3,2,1,0,23,1,1,0,0,0,24,25,3,
  	4,2,0,25,26,5,28,0,0,26,28,1,0,0,0,27,24,1,0,0,0,28,31,1,0,0,0,29,27,
  	1,0,0,0,29,30,1,0,0,0,30,33,1,0,0,0,31,29,1,0,0,0,32,34,5,0,0,1,33,32,
  	1,0,0,0,33,34,1,0,0,0,34,3,1,0,0,0,35,36,3,6,3,0,36,5,1,0,0,0,37,38,5,
  	3,0,0,38,39,5,24,0,0,39,40,3,6,3,0,40,41,5,25,0,0,41,42,5,26,0,0,42,43,
  	3,2,1,0,43,49,5,27,0,0,44,45,5,4,0,0,45,46,5,26,0,0,46,47,3,2,1,0,47,
  	48,5,27,0,0,48,50,1,0,0,0,49,44,1,0,0,0,49,50,1,0,0,0,50,65,1,0,0,0,51,
  	52,5,5,0,0,52,53,5,24,0,0,53,54,3,6,3,0,54,55,5,25,0,0,55,56,5,26,0,0,
  	56,57,3,2,1,0,57,58,5,27,0,0,58,65,1,0,0,0,59,60,3,10,5,0,60,61,5,6,0,
  	0,61,62,3,6,3,0,62,65,1,0,0,0,63,65,3,8,4,0,64,37,1,0,0,0,64,51,1,0,0,
  	0,64,59,1,0,0,0,64,63,1,0,0,0,65,7,1,0,0,0,66,67,6,4,-1,0,67,68,5,15,
  	0,0,68,71,3,8,4,12,69,71,3,12,6,0,70,66,1,0,0,0,70,69,1,0,0,0,71,104,
  	1,0,0,0,72,73,10,11,0,0,73,74,5,16,0,0,74,103,3,8,4,12,75,76,10,10,0,
  	0,76,77,5,17,0,0,77,103,3,8,4,11,78,79,10,9,0,0,79,80,5,18,0,0,80,103,
  	3,8,4,10,81,82,10,8,0,0,82,83,5,19,0,0,83,103,3,8,4,9,84,85,10,7,0,0,
  	85,86,5,20,0,0,86,103,3,8,4,8,87,88,10,6,0,0,88,89,5,21,0,0,89,103,3,
  	8,4,7,90,91,10,5,0,0,91,92,5,14,0,0,92,103,3,8,4,6,93,94,10,4,0,0,94,
  	95,5,13,0,0,95,103,3,8,4,5,96,97,10,3,0,0,97,98,5,8,0,0,98,103,3,12,6,
  	0,99,100,10,2,0,0,100,101,5,9,0,0,101,103,3,12,6,0,102,72,1,0,0,0,102,
  	75,1,0,0,0,102,78,1,0,0,0,102,81,1,0,0,0,102,84,1,0,0,0,102,87,1,0,0,
  	0,102,90,1,0,0,0,102,93,1,0,0,0,102,96,1,0,0,0,102,99,1,0,0,0,103,106,
  	1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,9,1,0,0,0,106,104,1,0,0,0,
  	107,108,5,7,0,0,108,11,1,0,0,0,109,110,6,6,-1,0,110,111,3,14,7,0,111,
  	123,1,0,0,0,112,113,10,4,0,0,113,114,5,10,0,0,114,122,3,16,8,0,115,116,
  	10,3,0,0,116,117,5,11,0,0,117,122,3,16,8,0,118,119,10,2,0,0,119,120,5,
  	12,0,0,120,122,3,16,8,0,121,112,1,0,0,0,121,115,1,0,0,0,121,118,1,0,0,
  	0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,13,1,0,0,0,125,
  	123,1,0,0,0,126,127,5,8,0,0,127,132,3,16,8,0,128,129,5,9,0,0,129,132,
  	3,16,8,0,130,132,3,16,8,0,131,126,1,0,0,0,131,128,1,0,0,0,131,130,1,0,
  	0,0,132,15,1,0,0,0,133,134,5,24,0,0,134,135,3,6,3,0,135,136,5,25,0,0,
  	136,141,1,0,0,0,137,141,3,18,9,0,138,141,3,20,10,0,139,141,3,10,5,0,140,
  	133,1,0,0,0,140,137,1,0,0,0,140,138,1,0,0,0,140,139,1,0,0,0,141,17,1,
  	0,0,0,142,143,5,7,0,0,143,152,5,24,0,0,144,149,3,6,3,0,145,146,5,23,0,
  	0,146,148,3,6,3,0,147,145,1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,
  	150,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,152,144,1,0,0,0,152,153,1,
  	0,0,0,153,154,1,0,0,0,154,155,5,25,0,0,155,19,1,0,0,0,156,161,5,2,0,0,
  	157,158,5,2,0,0,158,159,5,22,0,0,159,161,5,2,0,0,160,156,1,0,0,0,160,
  	157,1,0,0,0,161,21,1,0,0,0,14,29,33,49,64,70,102,104,121,123,131,140,
  	149,152,160
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcParserStaticData = staticData.release();
}

}

CalcParser::CalcParser(TokenStream *input) : CalcParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CalcParser::CalcParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CalcParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcParserStaticData->atn, calcParserStaticData->decisionToDFA, calcParserStaticData->sharedContextCache, options);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

const atn::ATN& CalcParser::getATN() const {
  return *calcParserStaticData->atn;
}

std::string CalcParser::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return calcParserStaticData->ruleNames;
}

const dfa::Vocabulary& CalcParser::getVocabulary() const {
  return calcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcParser::getSerializedATN() const {
  return calcParserStaticData->serializedATN;
}


//----------------- PstartContext ------------------------------------------------------------------

CalcParser::PstartContext::PstartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::PstartContext::getRuleIndex() const {
  return CalcParser::RulePstart;
}

void CalcParser::PstartContext::copyFrom(PstartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgStartContext ------------------------------------------------------------------

CalcParser::ProgramContext* CalcParser::ProgStartContext::program() {
  return getRuleContext<CalcParser::ProgramContext>(0);
}

CalcParser::ProgStartContext::ProgStartContext(PstartContext *ctx) { copyFrom(ctx); }

void CalcParser::ProgStartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgStart(this);
}
void CalcParser::ProgStartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgStart(this);
}

std::any CalcParser::ProgStartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProgStart(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::PstartContext* CalcParser::pstart() {
  PstartContext *_localctx = _tracker.createInstance<PstartContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RulePstart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::ProgStartContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(22);
    program();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

CalcParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ProgramContext::getRuleIndex() const {
  return CalcParser::RuleProgram;
}

void CalcParser::ProgramContext::copyFrom(ProgramContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExProgramContext ------------------------------------------------------------------

std::vector<CalcParser::LineContext *> CalcParser::ExProgramContext::line() {
  return getRuleContexts<CalcParser::LineContext>();
}

CalcParser::LineContext* CalcParser::ExProgramContext::line(size_t i) {
  return getRuleContext<CalcParser::LineContext>(i);
}

std::vector<tree::TerminalNode *> CalcParser::ExProgramContext::SEP() {
  return getTokens(CalcParser::SEP);
}

tree::TerminalNode* CalcParser::ExProgramContext::SEP(size_t i) {
  return getToken(CalcParser::SEP, i);
}

tree::TerminalNode* CalcParser::ExProgramContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}

CalcParser::ExProgramContext::ExProgramContext(ProgramContext *ctx) { copyFrom(ctx); }

void CalcParser::ExProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExProgram(this);
}
void CalcParser::ExProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExProgram(this);
}

std::any CalcParser::ExProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExProgram(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::ProgramContext* CalcParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::ExProgramContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16810924) != 0)) {
      setState(24);
      line();
      setState(25);
      match(CalcParser::SEP);
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(33);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(32);
      match(CalcParser::EOF);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

CalcParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::LineContext::getRuleIndex() const {
  return CalcParser::RuleLine;
}

void CalcParser::LineContext::copyFrom(LineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionLineContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::ExpressionLineContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::ExpressionLineContext::ExpressionLineContext(LineContext *ctx) { copyFrom(ctx); }

void CalcParser::ExpressionLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionLine(this);
}
void CalcParser::ExpressionLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionLine(this);
}

std::any CalcParser::ExpressionLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExpressionLine(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::LineContext* CalcParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 4, CalcParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::ExpressionLineContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(35);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CalcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ExprContext::getRuleIndex() const {
  return CalcParser::RuleExpr;
}

void CalcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::WhileExprContext::WHILE() {
  return getToken(CalcParser::WHILE, 0);
}

tree::TerminalNode* CalcParser::WhileExprContext::LBRACKET() {
  return getToken(CalcParser::LBRACKET, 0);
}

CalcParser::ExprContext* CalcParser::WhileExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::WhileExprContext::RBRACKET() {
  return getToken(CalcParser::RBRACKET, 0);
}

tree::TerminalNode* CalcParser::WhileExprContext::LFBRACKET() {
  return getToken(CalcParser::LFBRACKET, 0);
}

CalcParser::ProgramContext* CalcParser::WhileExprContext::program() {
  return getRuleContext<CalcParser::ProgramContext>(0);
}

tree::TerminalNode* CalcParser::WhileExprContext::RFBRACKET() {
  return getToken(CalcParser::RFBRACKET, 0);
}

CalcParser::WhileExprContext::WhileExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::WhileExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileExpr(this);
}
void CalcParser::WhileExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileExpr(this);
}

std::any CalcParser::WhileExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitWhileExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IfExprContext::IF() {
  return getToken(CalcParser::IF, 0);
}

tree::TerminalNode* CalcParser::IfExprContext::LBRACKET() {
  return getToken(CalcParser::LBRACKET, 0);
}

CalcParser::ExprContext* CalcParser::IfExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::IfExprContext::RBRACKET() {
  return getToken(CalcParser::RBRACKET, 0);
}

std::vector<tree::TerminalNode *> CalcParser::IfExprContext::LFBRACKET() {
  return getTokens(CalcParser::LFBRACKET);
}

tree::TerminalNode* CalcParser::IfExprContext::LFBRACKET(size_t i) {
  return getToken(CalcParser::LFBRACKET, i);
}

std::vector<CalcParser::ProgramContext *> CalcParser::IfExprContext::program() {
  return getRuleContexts<CalcParser::ProgramContext>();
}

CalcParser::ProgramContext* CalcParser::IfExprContext::program(size_t i) {
  return getRuleContext<CalcParser::ProgramContext>(i);
}

std::vector<tree::TerminalNode *> CalcParser::IfExprContext::RFBRACKET() {
  return getTokens(CalcParser::RFBRACKET);
}

tree::TerminalNode* CalcParser::IfExprContext::RFBRACKET(size_t i) {
  return getToken(CalcParser::RFBRACKET, i);
}

tree::TerminalNode* CalcParser::IfExprContext::ELSE() {
  return getToken(CalcParser::ELSE, 0);
}

CalcParser::IfExprContext::IfExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::IfExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpr(this);
}
void CalcParser::IfExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpr(this);
}

std::any CalcParser::IfExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitIfExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqExprContext ------------------------------------------------------------------

CalcParser::VariableContext* CalcParser::EqExprContext::variable() {
  return getRuleContext<CalcParser::VariableContext>(0);
}

tree::TerminalNode* CalcParser::EqExprContext::EQ() {
  return getToken(CalcParser::EQ, 0);
}

CalcParser::ExprContext* CalcParser::EqExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::EqExprContext::EqExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::EqExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqExpr(this);
}
void CalcParser::EqExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqExpr(this);
}

std::any CalcParser::EqExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitEqExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OExprContext ------------------------------------------------------------------

CalcParser::OexprContext* CalcParser::OExprContext::oexpr() {
  return getRuleContext<CalcParser::OexprContext>(0);
}

CalcParser::OExprContext::OExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::OExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOExpr(this);
}
void CalcParser::OExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOExpr(this);
}

std::any CalcParser::OExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitOExpr(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::ExprContext* CalcParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 6, CalcParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(64);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::IfExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(37);
      match(CalcParser::IF);
      setState(38);
      match(CalcParser::LBRACKET);
      setState(39);
      expr();
      setState(40);
      match(CalcParser::RBRACKET);
      setState(41);
      match(CalcParser::LFBRACKET);
      setState(42);
      program();
      setState(43);
      match(CalcParser::RFBRACKET);
      setState(49);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CalcParser::ELSE) {
        setState(44);
        match(CalcParser::ELSE);
        setState(45);
        match(CalcParser::LFBRACKET);
        setState(46);
        program();
        setState(47);
        match(CalcParser::RFBRACKET);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::WhileExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(51);
      match(CalcParser::WHILE);
      setState(52);
      match(CalcParser::LBRACKET);
      setState(53);
      expr();
      setState(54);
      match(CalcParser::RBRACKET);
      setState(55);
      match(CalcParser::LFBRACKET);
      setState(56);
      program();
      setState(57);
      match(CalcParser::RFBRACKET);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CalcParser::EqExprContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(59);
      variable();
      setState(60);
      match(CalcParser::EQ);
      setState(61);
      expr();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CalcParser::OExprContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(63);
      oexpr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OexprContext ------------------------------------------------------------------

CalcParser::OexprContext::OexprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::OexprContext::getRuleIndex() const {
  return CalcParser::RuleOexpr;
}

void CalcParser::OexprContext::copyFrom(OexprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TermExprContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::TermExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::TermExprContext::TermExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::TermExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermExpr(this);
}
void CalcParser::TermExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermExpr(this);
}

std::any CalcParser::TermExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitTermExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BrteExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BrteExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BrteExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BrteExprContext::BRTE() {
  return getToken(CalcParser::BRTE, 0);
}

CalcParser::BrteExprContext::BrteExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BrteExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBrteExpr(this);
}
void CalcParser::BrteExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBrteExpr(this);
}

std::any CalcParser::BrteExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBrteExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlteExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BlteExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BlteExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BlteExprContext::BLTE() {
  return getToken(CalcParser::BLTE, 0);
}

CalcParser::BlteExprContext::BlteExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BlteExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlteExpr(this);
}
void CalcParser::BlteExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlteExpr(this);
}

std::any CalcParser::BlteExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBlteExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BneqExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BneqExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BneqExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BneqExprContext::BNEQ() {
  return getToken(CalcParser::BNEQ, 0);
}

CalcParser::BneqExprContext::BneqExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BneqExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBneqExpr(this);
}
void CalcParser::BneqExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBneqExpr(this);
}

std::any CalcParser::BneqExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBneqExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BltExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BltExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BltExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BltExprContext::BLT() {
  return getToken(CalcParser::BLT, 0);
}

CalcParser::BltExprContext::BltExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BltExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBltExpr(this);
}
void CalcParser::BltExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBltExpr(this);
}

std::any CalcParser::BltExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBltExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BorExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BorExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BorExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BorExprContext::BOR() {
  return getToken(CalcParser::BOR, 0);
}

CalcParser::BorExprContext::BorExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BorExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBorExpr(this);
}
void CalcParser::BorExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBorExpr(this);
}

std::any CalcParser::BorExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBorExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

CalcParser::OexprContext* CalcParser::SubExprContext::oexpr() {
  return getRuleContext<CalcParser::OexprContext>(0);
}

tree::TerminalNode* CalcParser::SubExprContext::MINUS() {
  return getToken(CalcParser::MINUS, 0);
}

CalcParser::TermContext* CalcParser::SubExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::SubExprContext::SubExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::SubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubExpr(this);
}
void CalcParser::SubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubExpr(this);
}

std::any CalcParser::SubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddExprContext ------------------------------------------------------------------

CalcParser::OexprContext* CalcParser::AddExprContext::oexpr() {
  return getRuleContext<CalcParser::OexprContext>(0);
}

tree::TerminalNode* CalcParser::AddExprContext::PLUS() {
  return getToken(CalcParser::PLUS, 0);
}

CalcParser::TermContext* CalcParser::AddExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::AddExprContext::AddExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::AddExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExpr(this);
}
void CalcParser::AddExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExpr(this);
}

std::any CalcParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BandExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BandExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BandExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BandExprContext::BAND() {
  return getToken(CalcParser::BAND, 0);
}

CalcParser::BandExprContext::BandExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BandExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBandExpr(this);
}
void CalcParser::BandExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBandExpr(this);
}

std::any CalcParser::BandExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBandExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BeqExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BeqExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BeqExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BeqExprContext::BEQ() {
  return getToken(CalcParser::BEQ, 0);
}

CalcParser::BeqExprContext::BeqExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BeqExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBeqExpr(this);
}
void CalcParser::BeqExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBeqExpr(this);
}

std::any CalcParser::BeqExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBeqExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BnotExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::BnotExprContext::BNOT() {
  return getToken(CalcParser::BNOT, 0);
}

CalcParser::OexprContext* CalcParser::BnotExprContext::oexpr() {
  return getRuleContext<CalcParser::OexprContext>(0);
}

CalcParser::BnotExprContext::BnotExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BnotExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBnotExpr(this);
}
void CalcParser::BnotExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBnotExpr(this);
}

std::any CalcParser::BnotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBnotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BrtExprContext ------------------------------------------------------------------

std::vector<CalcParser::OexprContext *> CalcParser::BrtExprContext::oexpr() {
  return getRuleContexts<CalcParser::OexprContext>();
}

CalcParser::OexprContext* CalcParser::BrtExprContext::oexpr(size_t i) {
  return getRuleContext<CalcParser::OexprContext>(i);
}

tree::TerminalNode* CalcParser::BrtExprContext::BRT() {
  return getToken(CalcParser::BRT, 0);
}

CalcParser::BrtExprContext::BrtExprContext(OexprContext *ctx) { copyFrom(ctx); }

void CalcParser::BrtExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBrtExpr(this);
}
void CalcParser::BrtExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBrtExpr(this);
}

std::any CalcParser::BrtExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBrtExpr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::OexprContext* CalcParser::oexpr() {
   return oexpr(0);
}

CalcParser::OexprContext* CalcParser::oexpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::OexprContext *_localctx = _tracker.createInstance<OexprContext>(_ctx, parentState);
  CalcParser::OexprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, CalcParser::RuleOexpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::BNOT: {
        _localctx = _tracker.createInstance<BnotExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(67);
        match(CalcParser::BNOT);
        setState(68);
        oexpr(12);
        break;
      }

      case CalcParser::INT:
      case CalcParser::NAME:
      case CalcParser::PLUS:
      case CalcParser::MINUS:
      case CalcParser::LBRACKET: {
        _localctx = _tracker.createInstance<TermExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(69);
        term(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(104);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(102);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BeqExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(72);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(73);
          match(CalcParser::BEQ);
          setState(74);
          oexpr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BneqExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(75);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(76);
          match(CalcParser::BNEQ);
          setState(77);
          oexpr(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BltExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(78);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(79);
          match(CalcParser::BLT);
          setState(80);
          oexpr(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BrtExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(81);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(82);
          match(CalcParser::BRT);
          setState(83);
          oexpr(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BlteExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(84);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(85);
          match(CalcParser::BLTE);
          setState(86);
          oexpr(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BrteExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(87);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(88);
          match(CalcParser::BRTE);
          setState(89);
          oexpr(7);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BorExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(90);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(91);
          match(CalcParser::BOR);
          setState(92);
          oexpr(6);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BandExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(93);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(94);
          match(CalcParser::BAND);
          setState(95);
          oexpr(5);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(96);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(97);
          match(CalcParser::PLUS);
          setState(98);
          term(0);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<SubExprContext>(_tracker.createInstance<OexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleOexpr);
          setState(99);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(100);
          match(CalcParser::MINUS);
          setState(101);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(106);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

CalcParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::VariableContext::getRuleIndex() const {
  return CalcParser::RuleVariable;
}

void CalcParser::VariableContext::copyFrom(VariableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarNameContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::VarNameContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::VarNameContext::VarNameContext(VariableContext *ctx) { copyFrom(ctx); }

void CalcParser::VarNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarName(this);
}
void CalcParser::VarNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarName(this);
}

std::any CalcParser::VarNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitVarName(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::VariableContext* CalcParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 10, CalcParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::VarNameContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(CalcParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

CalcParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::TermContext::getRuleIndex() const {
  return CalcParser::RuleTerm;
}

void CalcParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MulTermContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::MulTermContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

tree::TerminalNode* CalcParser::MulTermContext::MUL() {
  return getToken(CalcParser::MUL, 0);
}

CalcParser::FactorContext* CalcParser::MulTermContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::MulTermContext::MulTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::MulTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulTerm(this);
}
void CalcParser::MulTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulTerm(this);
}

std::any CalcParser::MulTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMulTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MDivTermContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::MDivTermContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

tree::TerminalNode* CalcParser::MDivTermContext::MDIV() {
  return getToken(CalcParser::MDIV, 0);
}

CalcParser::FactorContext* CalcParser::MDivTermContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::MDivTermContext::MDivTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::MDivTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMDivTerm(this);
}
void CalcParser::MDivTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMDivTerm(this);
}

std::any CalcParser::MDivTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMDivTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivTermContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::DivTermContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

tree::TerminalNode* CalcParser::DivTermContext::DIV() {
  return getToken(CalcParser::DIV, 0);
}

CalcParser::FactorContext* CalcParser::DivTermContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::DivTermContext::DivTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::DivTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivTerm(this);
}
void CalcParser::DivTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivTerm(this);
}

std::any CalcParser::DivTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitDivTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryTermContext ------------------------------------------------------------------

CalcParser::PrimaryContext* CalcParser::PrimaryTermContext::primary() {
  return getRuleContext<CalcParser::PrimaryContext>(0);
}

CalcParser::PrimaryTermContext::PrimaryTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::PrimaryTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryTerm(this);
}
void CalcParser::PrimaryTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryTerm(this);
}

std::any CalcParser::PrimaryTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrimaryTerm(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::TermContext* CalcParser::term() {
   return term(0);
}

CalcParser::TermContext* CalcParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  CalcParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, CalcParser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<PrimaryTermContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(110);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(121);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(112);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(113);
          match(CalcParser::MUL);
          setState(114);
          factor();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(115);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(116);
          match(CalcParser::DIV);
          setState(117);
          factor();
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MDivTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(118);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(119);
          match(CalcParser::MDIV);
          setState(120);
          factor();
          break;
        }

        default:
          break;
        } 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

CalcParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::PrimaryContext::getRuleIndex() const {
  return CalcParser::RulePrimary;
}

void CalcParser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FactPrimaryContext ------------------------------------------------------------------

CalcParser::FactorContext* CalcParser::FactPrimaryContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::FactPrimaryContext::FactPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }

void CalcParser::FactPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactPrimary(this);
}
void CalcParser::FactPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactPrimary(this);
}

std::any CalcParser::FactPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFactPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusPrimaryContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::MinusPrimaryContext::MINUS() {
  return getToken(CalcParser::MINUS, 0);
}

CalcParser::FactorContext* CalcParser::MinusPrimaryContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::MinusPrimaryContext::MinusPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }

void CalcParser::MinusPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinusPrimary(this);
}
void CalcParser::MinusPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinusPrimary(this);
}

std::any CalcParser::MinusPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMinusPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusPrimaryContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::PlusPrimaryContext::PLUS() {
  return getToken(CalcParser::PLUS, 0);
}

CalcParser::FactorContext* CalcParser::PlusPrimaryContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::PlusPrimaryContext::PlusPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }

void CalcParser::PlusPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusPrimary(this);
}
void CalcParser::PlusPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusPrimary(this);
}

std::any CalcParser::PlusPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPlusPrimary(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::PrimaryContext* CalcParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 14, CalcParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::PLUS: {
        _localctx = _tracker.createInstance<CalcParser::PlusPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(126);
        match(CalcParser::PLUS);
        setState(127);
        factor();
        break;
      }

      case CalcParser::MINUS: {
        _localctx = _tracker.createInstance<CalcParser::MinusPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(128);
        match(CalcParser::MINUS);
        setState(129);
        factor();
        break;
      }

      case CalcParser::INT:
      case CalcParser::NAME:
      case CalcParser::LBRACKET: {
        _localctx = _tracker.createInstance<CalcParser::FactPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(130);
        factor();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

CalcParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::FactorContext::getRuleIndex() const {
  return CalcParser::RuleFactor;
}

void CalcParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariableFactorContext ------------------------------------------------------------------

CalcParser::VariableContext* CalcParser::VariableFactorContext::variable() {
  return getRuleContext<CalcParser::VariableContext>(0);
}

CalcParser::VariableFactorContext::VariableFactorContext(FactorContext *ctx) { copyFrom(ctx); }

void CalcParser::VariableFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableFactor(this);
}
void CalcParser::VariableFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableFactor(this);
}

std::any CalcParser::VariableFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitVariableFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BracketFactorContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::BracketFactorContext::LBRACKET() {
  return getToken(CalcParser::LBRACKET, 0);
}

CalcParser::ExprContext* CalcParser::BracketFactorContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::BracketFactorContext::RBRACKET() {
  return getToken(CalcParser::RBRACKET, 0);
}

CalcParser::BracketFactorContext::BracketFactorContext(FactorContext *ctx) { copyFrom(ctx); }

void CalcParser::BracketFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracketFactor(this);
}
void CalcParser::BracketFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracketFactor(this);
}

std::any CalcParser::BracketFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBracketFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionFactorContext ------------------------------------------------------------------

CalcParser::FunctionContext* CalcParser::FunctionFactorContext::function() {
  return getRuleContext<CalcParser::FunctionContext>(0);
}

CalcParser::FunctionFactorContext::FunctionFactorContext(FactorContext *ctx) { copyFrom(ctx); }

void CalcParser::FunctionFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionFactor(this);
}
void CalcParser::FunctionFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionFactor(this);
}

std::any CalcParser::FunctionFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFunctionFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberFactorContext ------------------------------------------------------------------

CalcParser::NumberContext* CalcParser::NumberFactorContext::number() {
  return getRuleContext<CalcParser::NumberContext>(0);
}

CalcParser::NumberFactorContext::NumberFactorContext(FactorContext *ctx) { copyFrom(ctx); }

void CalcParser::NumberFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberFactor(this);
}
void CalcParser::NumberFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberFactor(this);
}

std::any CalcParser::NumberFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitNumberFactor(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::FactorContext* CalcParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 16, CalcParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::BracketFactorContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(133);
      match(CalcParser::LBRACKET);
      setState(134);
      expr();
      setState(135);
      match(CalcParser::RBRACKET);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::FunctionFactorContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(137);
      function();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CalcParser::NumberFactorContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(138);
      number();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CalcParser::VariableFactorContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(139);
      variable();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

CalcParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::FunctionContext::getRuleIndex() const {
  return CalcParser::RuleFunction;
}

void CalcParser::FunctionContext::copyFrom(FunctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::FunctionCallContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

tree::TerminalNode* CalcParser::FunctionCallContext::LBRACKET() {
  return getToken(CalcParser::LBRACKET, 0);
}

tree::TerminalNode* CalcParser::FunctionCallContext::RBRACKET() {
  return getToken(CalcParser::RBRACKET, 0);
}

std::vector<CalcParser::ExprContext *> CalcParser::FunctionCallContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::FunctionCallContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> CalcParser::FunctionCallContext::COMMA() {
  return getTokens(CalcParser::COMMA);
}

tree::TerminalNode* CalcParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(CalcParser::COMMA, i);
}

CalcParser::FunctionCallContext::FunctionCallContext(FunctionContext *ctx) { copyFrom(ctx); }

void CalcParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void CalcParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

std::any CalcParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::FunctionContext* CalcParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 18, CalcParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::FunctionCallContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(CalcParser::NAME);
    setState(143);
    match(CalcParser::LBRACKET);
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16810924) != 0)) {
      setState(144);
      expr();
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CalcParser::COMMA) {
        setState(145);
        match(CalcParser::COMMA);
        setState(146);
        expr();
        setState(151);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(154);
    match(CalcParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

CalcParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::NumberContext::getRuleIndex() const {
  return CalcParser::RuleNumber;
}

void CalcParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RealNumberContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> CalcParser::RealNumberContext::INT() {
  return getTokens(CalcParser::INT);
}

tree::TerminalNode* CalcParser::RealNumberContext::INT(size_t i) {
  return getToken(CalcParser::INT, i);
}

tree::TerminalNode* CalcParser::RealNumberContext::DOT() {
  return getToken(CalcParser::DOT, 0);
}

CalcParser::RealNumberContext::RealNumberContext(NumberContext *ctx) { copyFrom(ctx); }

void CalcParser::RealNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRealNumber(this);
}
void CalcParser::RealNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRealNumber(this);
}

std::any CalcParser::RealNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitRealNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntNumberContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IntNumberContext::INT() {
  return getToken(CalcParser::INT, 0);
}

CalcParser::IntNumberContext::IntNumberContext(NumberContext *ctx) { copyFrom(ctx); }

void CalcParser::IntNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntNumber(this);
}
void CalcParser::IntNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntNumber(this);
}

std::any CalcParser::IntNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitIntNumber(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::NumberContext* CalcParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 20, CalcParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::IntNumberContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(156);
      match(CalcParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::RealNumberContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(157);
      match(CalcParser::INT);
      setState(158);
      match(CalcParser::DOT);
      setState(159);
      match(CalcParser::INT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CalcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return oexprSempred(antlrcpp::downCast<OexprContext *>(context), predicateIndex);
    case 6: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcParser::oexprSempred(OexprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CalcParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);
    case 12: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void CalcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcParserInitialize();
#else
  ::antlr4::internal::call_once(calcParserOnceFlag, calcParserInitialize);
#endif
}
