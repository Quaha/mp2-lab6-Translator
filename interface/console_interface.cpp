#include <iostream>
#include <antlr4-runtime.h>
#include "MyGrammarLexer.h"
#include "MyGrammarParser.h"

#include "empty.hpp"

int main() {
    std::string input = "123;456;789";

    antlr4::ANTLRInputStream inputStream(input);
    MyGrammarLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    MyGrammarParser parser(&tokens);

    antlr4::tree::ParseTree* tree = parser.program();

    MyListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return 0;
}
