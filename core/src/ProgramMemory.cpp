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

void MemoryManager::setVariableValue(const std::string& vname, Data data) {
    if (variables[vname].checkFlags(DataFlags::Const)) {
        throw std::runtime_error("It is forbidden to change the const value!");
    }

    variables[vname] = data;
}

Data MemoryManager::getVariableValue(const std::string& vname) {
    if (!variables.contains(vname)) {
        throw std::runtime_error("Variable " + vname + " was not found!");
    }
    return variables[vname];
}

bool MemoryManager::isInited() const {
    return is_init;
}

void initMemory() {

    if (ProgramMemory.isInited()) return;
    ProgramMemory.is_init = true;

    // Functions init
    ProgramMemory.functions["sum"] = &DataMath::SUM;
    ProgramMemory.functions["abs"] = &DataMath::ABS;

}

void clearMemory() {
    ProgramMemory.variables.clear();
}