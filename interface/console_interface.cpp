#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "CalcLexer.h"
#include "CalcParser.h"
#include "CalcEvalVisitor.hpp"

int main() {

    while (true) {
        std::string input;

        std::cin >> input;

        antlr4::ANTLRInputStream stream(input);

        CalcLexer lexer(&stream);
        antlr4::CommonTokenStream tokens(&lexer);
        CalcParser parser(&tokens);

        auto tree = parser.program();

        CalcEvalVisitor visitor;
        std::vector<int> result = std::any_cast<std::vector<int>>(visitor.visit(tree));

        for (int value : result) {
            std::cout << ">> " << value << std::endl;
        }
    }
}
