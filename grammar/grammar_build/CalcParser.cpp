
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
      "program", "line", "expr", "term", "primary", "factor", "function", 
      "variable", "number"
    },
    std::vector<std::string>{
      "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'='", "'&&'", "'||'", 
      "'!'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'.'", "','", 
      "'('", "')'", "'{'", "'}'", "';'"
    },
    std::vector<std::string>{
      "", "WS", "INT", "NAME", "PLUS", "MINUS", "MUL", "DIV", "EQ", "BAND", 
      "BOR", "BNOT", "BEQ", "BNEQ", "BLT", "BRT", "BLTE", "BRTE", "DOT", 
      "COMMA", "LBRACKET", "RBRACKET", "LFBRACKET", "RFBRACKET", "SEP"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,128,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,1,0,5,0,22,8,0,10,0,12,0,25,9,0,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,39,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,5,2,71,8,2,10,2,12,2,74,9,2,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,5,3,85,8,3,10,3,12,3,88,9,3,1,4,1,4,1,4,1,4,1,4,3,4,
  	95,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,104,8,5,1,6,1,6,1,6,1,6,1,6,5,
  	6,111,8,6,10,6,12,6,114,9,6,3,6,116,8,6,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,
  	8,3,8,126,8,8,1,8,0,2,4,6,9,0,2,4,6,8,10,12,14,16,0,0,141,0,23,1,0,0,
  	0,2,28,1,0,0,0,4,38,1,0,0,0,6,75,1,0,0,0,8,94,1,0,0,0,10,103,1,0,0,0,
  	12,105,1,0,0,0,14,119,1,0,0,0,16,125,1,0,0,0,18,19,3,2,1,0,19,20,5,24,
  	0,0,20,22,1,0,0,0,21,18,1,0,0,0,22,25,1,0,0,0,23,21,1,0,0,0,23,24,1,0,
  	0,0,24,26,1,0,0,0,25,23,1,0,0,0,26,27,5,0,0,1,27,1,1,0,0,0,28,29,3,4,
  	2,0,29,3,1,0,0,0,30,31,6,2,-1,0,31,32,3,14,7,0,32,33,5,8,0,0,33,34,3,
  	4,2,13,34,39,1,0,0,0,35,36,5,11,0,0,36,39,3,4,2,12,37,39,3,6,3,0,38,30,
  	1,0,0,0,38,35,1,0,0,0,38,37,1,0,0,0,39,72,1,0,0,0,40,41,10,11,0,0,41,
  	42,5,12,0,0,42,71,3,4,2,12,43,44,10,10,0,0,44,45,5,13,0,0,45,71,3,4,2,
  	11,46,47,10,9,0,0,47,48,5,14,0,0,48,71,3,4,2,10,49,50,10,8,0,0,50,51,
  	5,15,0,0,51,71,3,4,2,9,52,53,10,7,0,0,53,54,5,16,0,0,54,71,3,4,2,8,55,
  	56,10,6,0,0,56,57,5,17,0,0,57,71,3,4,2,7,58,59,10,5,0,0,59,60,5,9,0,0,
  	60,71,3,4,2,6,61,62,10,4,0,0,62,63,5,10,0,0,63,71,3,4,2,5,64,65,10,3,
  	0,0,65,66,5,4,0,0,66,71,3,6,3,0,67,68,10,2,0,0,68,69,5,5,0,0,69,71,3,
  	6,3,0,70,40,1,0,0,0,70,43,1,0,0,0,70,46,1,0,0,0,70,49,1,0,0,0,70,52,1,
  	0,0,0,70,55,1,0,0,0,70,58,1,0,0,0,70,61,1,0,0,0,70,64,1,0,0,0,70,67,1,
  	0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,5,1,0,0,0,74,72,1,
  	0,0,0,75,76,6,3,-1,0,76,77,3,8,4,0,77,86,1,0,0,0,78,79,10,3,0,0,79,80,
  	5,6,0,0,80,85,3,10,5,0,81,82,10,2,0,0,82,83,5,7,0,0,83,85,3,10,5,0,84,
  	78,1,0,0,0,84,81,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,
  	7,1,0,0,0,88,86,1,0,0,0,89,90,5,4,0,0,90,95,3,10,5,0,91,92,5,5,0,0,92,
  	95,3,10,5,0,93,95,3,10,5,0,94,89,1,0,0,0,94,91,1,0,0,0,94,93,1,0,0,0,
  	95,9,1,0,0,0,96,97,5,20,0,0,97,98,3,4,2,0,98,99,5,21,0,0,99,104,1,0,0,
  	0,100,104,3,12,6,0,101,104,3,16,8,0,102,104,3,14,7,0,103,96,1,0,0,0,103,
  	100,1,0,0,0,103,101,1,0,0,0,103,102,1,0,0,0,104,11,1,0,0,0,105,106,5,
  	3,0,0,106,115,5,20,0,0,107,112,3,4,2,0,108,109,5,19,0,0,109,111,3,4,2,
  	0,110,108,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,
  	116,1,0,0,0,114,112,1,0,0,0,115,107,1,0,0,0,115,116,1,0,0,0,116,117,1,
  	0,0,0,117,118,5,21,0,0,118,13,1,0,0,0,119,120,5,3,0,0,120,15,1,0,0,0,
  	121,126,5,2,0,0,122,123,5,2,0,0,123,124,5,18,0,0,124,126,5,2,0,0,125,
  	121,1,0,0,0,125,122,1,0,0,0,126,17,1,0,0,0,11,23,38,70,72,84,86,94,103,
  	112,115,125
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

tree::TerminalNode* CalcParser::ExProgramContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}

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
  enterRule(_localctx, 0, CalcParser::RuleProgram);
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
    setState(23);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1050684) != 0)) {
      setState(18);
      line();
      setState(19);
      match(CalcParser::SEP);
      setState(25);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(26);
    match(CalcParser::EOF);
   
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
  enterRule(_localctx, 2, CalcParser::RuleLine);

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
    setState(28);
    expr(0);
   
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

//----------------- TermExprContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::TermExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::TermExprContext::TermExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

std::vector<CalcParser::ExprContext *> CalcParser::BrteExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BrteExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BrteExprContext::BRTE() {
  return getToken(CalcParser::BRTE, 0);
}

CalcParser::BrteExprContext::BrteExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

std::vector<CalcParser::ExprContext *> CalcParser::BlteExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BlteExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BlteExprContext::BLTE() {
  return getToken(CalcParser::BLTE, 0);
}

CalcParser::BlteExprContext::BlteExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

std::vector<CalcParser::ExprContext *> CalcParser::BneqExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BneqExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BneqExprContext::BNEQ() {
  return getToken(CalcParser::BNEQ, 0);
}

CalcParser::BneqExprContext::BneqExprContext(ExprContext *ctx) { copyFrom(ctx); }

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
//----------------- SubExprContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::SubExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::SubExprContext::MINUS() {
  return getToken(CalcParser::MINUS, 0);
}

CalcParser::TermContext* CalcParser::SubExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::SubExprContext::SubExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

CalcParser::ExprContext* CalcParser::AddExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::AddExprContext::PLUS() {
  return getToken(CalcParser::PLUS, 0);
}

CalcParser::TermContext* CalcParser::AddExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::AddExprContext::AddExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

std::vector<CalcParser::ExprContext *> CalcParser::BandExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BandExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BandExprContext::BAND() {
  return getToken(CalcParser::BAND, 0);
}

CalcParser::BandExprContext::BandExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

std::vector<CalcParser::ExprContext *> CalcParser::BeqExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BeqExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BeqExprContext::BEQ() {
  return getToken(CalcParser::BEQ, 0);
}

CalcParser::BeqExprContext::BeqExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

CalcParser::ExprContext* CalcParser::BnotExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::BnotExprContext::BnotExprContext(ExprContext *ctx) { copyFrom(ctx); }

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
//----------------- BltExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::BltExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BltExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BltExprContext::BLT() {
  return getToken(CalcParser::BLT, 0);
}

CalcParser::BltExprContext::BltExprContext(ExprContext *ctx) { copyFrom(ctx); }

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
//----------------- BorExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::BorExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BorExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BorExprContext::BOR() {
  return getToken(CalcParser::BOR, 0);
}

CalcParser::BorExprContext::BorExprContext(ExprContext *ctx) { copyFrom(ctx); }

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
//----------------- BrtExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::BrtExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::BrtExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::BrtExprContext::BRT() {
  return getToken(CalcParser::BRT, 0);
}

CalcParser::BrtExprContext::BrtExprContext(ExprContext *ctx) { copyFrom(ctx); }

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

CalcParser::ExprContext* CalcParser::expr() {
   return expr(0);
}

CalcParser::ExprContext* CalcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalcParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalcParser::RuleExpr, precedence);

    

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
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<EqExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(31);
      variable();
      setState(32);
      match(CalcParser::EQ);
      setState(33);
      expr(13);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BnotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(35);
      match(CalcParser::BNOT);
      setState(36);
      expr(12);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<TermExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(37);
      term(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(72);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(70);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BeqExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(40);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(41);
          match(CalcParser::BEQ);
          setState(42);
          expr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BneqExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(43);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(44);
          match(CalcParser::BNEQ);
          setState(45);
          expr(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BltExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(46);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(47);
          match(CalcParser::BLT);
          setState(48);
          expr(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BrtExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(49);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(50);
          match(CalcParser::BRT);
          setState(51);
          expr(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BlteExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(52);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(53);
          match(CalcParser::BLTE);
          setState(54);
          expr(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BrteExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(55);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(56);
          match(CalcParser::BRTE);
          setState(57);
          expr(7);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BandExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(58);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(59);
          match(CalcParser::BAND);
          setState(60);
          expr(6);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BorExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(61);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(62);
          match(CalcParser::BOR);
          setState(63);
          expr(5);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(64);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(65);
          match(CalcParser::PLUS);
          setState(66);
          term(0);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<SubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(67);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(68);
          match(CalcParser::MINUS);
          setState(69);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(74);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
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
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, CalcParser::RuleTerm, precedence);

    

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

    setState(76);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(86);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(84);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(78);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(79);
          match(CalcParser::MUL);
          setState(80);
          factor();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(81);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(82);
          match(CalcParser::DIV);
          setState(83);
          factor();
          break;
        }

        default:
          break;
        } 
      }
      setState(88);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
  enterRule(_localctx, 8, CalcParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::PLUS: {
        _localctx = _tracker.createInstance<CalcParser::PlusPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(89);
        match(CalcParser::PLUS);
        setState(90);
        factor();
        break;
      }

      case CalcParser::MINUS: {
        _localctx = _tracker.createInstance<CalcParser::MinusPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(91);
        match(CalcParser::MINUS);
        setState(92);
        factor();
        break;
      }

      case CalcParser::INT:
      case CalcParser::NAME:
      case CalcParser::LBRACKET: {
        _localctx = _tracker.createInstance<CalcParser::FactPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(93);
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
  enterRule(_localctx, 10, CalcParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::BracketFactorContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(96);
      match(CalcParser::LBRACKET);
      setState(97);
      expr(0);
      setState(98);
      match(CalcParser::RBRACKET);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::FunctionFactorContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(100);
      function();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CalcParser::NumberFactorContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(101);
      number();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CalcParser::VariableFactorContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(102);
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
  enterRule(_localctx, 12, CalcParser::RuleFunction);
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
    setState(105);
    match(CalcParser::NAME);
    setState(106);
    match(CalcParser::LBRACKET);
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1050684) != 0)) {
      setState(107);
      expr(0);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CalcParser::COMMA) {
        setState(108);
        match(CalcParser::COMMA);
        setState(109);
        expr(0);
        setState(114);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(117);
    match(CalcParser::RBRACKET);
   
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
  enterRule(_localctx, 14, CalcParser::RuleVariable);

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
    setState(119);
    match(CalcParser::NAME);
   
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
  enterRule(_localctx, 16, CalcParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::IntNumberContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(121);
      match(CalcParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::RealNumberContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(122);
      match(CalcParser::INT);
      setState(123);
      match(CalcParser::DOT);
      setState(124);
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
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 3: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
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
    case 10: return precpred(_ctx, 3);
    case 11: return precpred(_ctx, 2);

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
