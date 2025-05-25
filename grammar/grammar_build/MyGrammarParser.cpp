
// Generated from MyGrammar.g4 by ANTLR 4.13.1


#include "MyGrammarListener.h"
#include "MyGrammarVisitor.h"

#include "MyGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MyGrammarParserStaticData final {
  MyGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyGrammarParserStaticData(const MyGrammarParserStaticData&) = delete;
  MyGrammarParserStaticData(MyGrammarParserStaticData&&) = delete;
  MyGrammarParserStaticData& operator=(const MyGrammarParserStaticData&) = delete;
  MyGrammarParserStaticData& operator=(MyGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MyGrammarParserStaticData *mygrammarParserStaticData = nullptr;

void mygrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MyGrammarParserStaticData>(
    std::vector<std::string>{
      "program", "expr"
    },
    std::vector<std::string>{
      "", "';'"
    },
    std::vector<std::string>{
      "", "SEP", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,3,17,2,0,7,0,2,1,7,1,1,0,1,0,1,0,5,0,8,8,0,10,0,12,0,11,9,0,1,0,1,
  	0,1,1,1,1,1,1,0,0,2,0,2,0,0,15,0,4,1,0,0,0,2,14,1,0,0,0,4,9,3,2,1,0,5,
  	6,5,1,0,0,6,8,3,2,1,0,7,5,1,0,0,0,8,11,1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,
  	0,10,12,1,0,0,0,11,9,1,0,0,0,12,13,5,0,0,1,13,1,1,0,0,0,14,15,5,2,0,0,
  	15,3,1,0,0,0,1,9
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarParserStaticData = staticData.release();
}

}

MyGrammarParser::MyGrammarParser(TokenStream *input) : MyGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MyGrammarParser::MyGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MyGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammarParserStaticData->atn, mygrammarParserStaticData->decisionToDFA, mygrammarParserStaticData->sharedContextCache, options);
}

MyGrammarParser::~MyGrammarParser() {
  delete _interpreter;
}

const atn::ATN& MyGrammarParser::getATN() const {
  return *mygrammarParserStaticData->atn;
}

std::string MyGrammarParser::getGrammarFileName() const {
  return "MyGrammar.g4";
}

const std::vector<std::string>& MyGrammarParser::getRuleNames() const {
  return mygrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& MyGrammarParser::getVocabulary() const {
  return mygrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MyGrammarParser::getSerializedATN() const {
  return mygrammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

MyGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyGrammarParser::ExprContext *> MyGrammarParser::ProgramContext::expr() {
  return getRuleContexts<MyGrammarParser::ExprContext>();
}

MyGrammarParser::ExprContext* MyGrammarParser::ProgramContext::expr(size_t i) {
  return getRuleContext<MyGrammarParser::ExprContext>(i);
}

tree::TerminalNode* MyGrammarParser::ProgramContext::EOF() {
  return getToken(MyGrammarParser::EOF, 0);
}

std::vector<tree::TerminalNode *> MyGrammarParser::ProgramContext::SEP() {
  return getTokens(MyGrammarParser::SEP);
}

tree::TerminalNode* MyGrammarParser::ProgramContext::SEP(size_t i) {
  return getToken(MyGrammarParser::SEP, i);
}


size_t MyGrammarParser::ProgramContext::getRuleIndex() const {
  return MyGrammarParser::RuleProgram;
}

void MyGrammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void MyGrammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any MyGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::ProgramContext* MyGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MyGrammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    expr();
    setState(9);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyGrammarParser::SEP) {
      setState(5);
      match(MyGrammarParser::SEP);
      setState(6);
      expr();
      setState(11);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(12);
    match(MyGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MyGrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::ExprContext::INT() {
  return getToken(MyGrammarParser::INT, 0);
}


size_t MyGrammarParser::ExprContext::getRuleIndex() const {
  return MyGrammarParser::RuleExpr;
}

void MyGrammarParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void MyGrammarParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any MyGrammarParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::ExprContext* MyGrammarParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, MyGrammarParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    match(MyGrammarParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void MyGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarParserInitialize();
#else
  ::antlr4::internal::call_once(mygrammarParserOnceFlag, mygrammarParserInitialize);
#endif
}
