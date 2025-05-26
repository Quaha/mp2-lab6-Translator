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
        catch (const std::exception& ex) {
            std::cout << "Error: " << ex.what() << std::endl;
        }
        catch (...) {
            std::cout << "Error: Something went wrong!" << std::endl;
        }
    }
}
