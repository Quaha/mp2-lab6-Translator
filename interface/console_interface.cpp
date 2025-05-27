#include <iostream>
#include <string>

#include "Interpreter.hpp"

int main() {

    int type_of_interface = 1;
    // 0 - interpreter in online mode
    // 1 - interpreter in compiler mode

    if (type_of_interface == 0) {

        std::cout << "Interactive mode (enter expressions one by one):\n";
        std::cout << "Type 'exit' to quit\n";

        while (true) {

            std::string input;
            std::getline(std::cin, input);

            if (input == "exit") break;

            try {
                std::vector<Data> result = processProgram(input);

                for (Data value : result) {
                    std::cout << ">> " << value << std::endl;
                }
            }
            catch (const std::exception& ex) {
                std::cout << "Error: " << ex.what() << std::endl;
            }
            catch (...) {
                std::cout << "Error: Something went wrong!" << std::endl;
            }
        }
    }
    else {
        std::cout << "Compiler mode (enter multi-line code):\n";
        std::cout << "Press Enter twice to finish input\n";

        std::string code;
        std::string line;
        bool empty_line = false;

        while (true) {
            std::getline(std::cin, line);

            // Check for two consecutive empty lines to finish
            if (line.empty()) {
                if (empty_line) break;
                empty_line = true;
            }
            else {
                empty_line = false;
            }

            code += line + "\n";
        }

        // Remove trailing whitespace
        while (!code.empty() && (code.back() == '\n' || code.back() == ' ')) {
            code.pop_back();
        }

        if (!code.empty()) {
            std::cout << "\nExecuting program:\n";
            std::cout << "-----------------\n";
            std::cout << code << "\n";
            std::cout << "-----------------\n";

            try {
                processProgram(code);
            }
            catch (const std::exception& e) {
                std::cerr << "\nExecution error: " << e.what() << "\n";
            }
        }
    }
}
