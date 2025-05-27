#pragma once

#include <vector>
#include <string>
#include <functional>
#include <unordered_map>

#include "Data.hpp"

using function_t = std::function<Data(std::vector<Data>)>;

class MemoryManager {
private:

	bool is_init = false;

	std::unordered_map<std::string, function_t> functions;
	std::unordered_map<std::string, Data> variables;

public:

	bool isFunctionExists(const std::string fname) const;
	Data callFunction(const std::string& fname, std::vector<Data> args);

	void setVariableValue(const std::string& vname, Data data);
	Data getVariableValue(const std::string& vname) ;
	void destroyVariable(const std::string& vname);

	bool isInited() const;

	friend void initMemory();
	friend void clearMemory();
};

extern MemoryManager ProgramMemory;

void initMemory();
void clearMemory();