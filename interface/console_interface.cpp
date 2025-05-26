#include <iostream>

#include "Interpreter.hpp"

int main() {

    while (true) {

        std::string input;
        std::cin >> input;

        try {
            std::vector<Data> result = processProgram(input);

            for (Data value : result) {
                std::cout << ">> " << value << std::endl;
            }
        }
        catch (const std::string& error_message) {
            std::cout << error_message << std::endl;
        }
        catch (...) {
            std::cout << "Something went wrong!" << std::endl;
        }
    }
}
