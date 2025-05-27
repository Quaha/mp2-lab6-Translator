#pragma once

#include <any>
#include <iostream>
#include <string>

#include "common.hpp"

class Data {
private:
	DataType type;
	std::any data;

public:

	Data();
	Data(DataType type, std::any data);

	template<typename T> T as() const {
		try {
			return std::any_cast<T>(data);
		}
		catch (const std::bad_any_cast& e) {
			throw std::runtime_error("Invalid type cast in Data::as()!");
		}
	}

	DataType getDataType() const;
	std::any getData() const;

	void setDataType(DataType type);
	void setData(std::any data);

	void makeNumber();

	bool isNumber() const;

	void makeInteger();
	void makeReal();

	void makeBool();

	friend std::ostream& operator<<(std::ostream& os, Data data);
};

Data stringToIntegerData(const std::string& S);
Data stringToRealData(const std::string& S);