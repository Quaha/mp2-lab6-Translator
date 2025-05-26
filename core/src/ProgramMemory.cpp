#include "ProgramMemory.hpp"

#include "DataMath.hpp"

MemoryManager ProgramMemory;

bool MemoryManager::isFunctionExists(const std::string fname) const {
    return functions.contains(fname);
}

Data MemoryManager::callFunction(const std::string& fname, std::vector<Data> args) {
    if (!isFunctionExists(fname)) {
        throw std::runtime_error("Function " + fname + "() was not found!");
    }
    return functions[fname](args);
}

bool MemoryManager::isInited() const {
    return is_init;
}

void initMemory() {

    if (ProgramMemory.isInited()) return;
    ProgramMemory.is_init = true;

    // Functions

    ProgramMemory.functions["sum"] = &DataMath::SUM;


}