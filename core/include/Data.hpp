#pragma once

#include <any>
#include <iostream>
#include <string>

#include "common.hpp"

class Data {
private:
	DataType type;
	std::any data;
	flag_t flags;

public:

	Data();
	Data(DataType type, std::any data, flag_t flags = DataFlags::None);

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
	flag_t getFlags() const;

	void setDataType(DataType type);
	void setData(std::any data);
	void setFlags(flag_t flags);

	bool checkFlags(flag_t flags) const;

	bool isCorrect() const;

	void makeNumber();

	bool isNumber() const;

	void makeInteger();
	void makeReal();

	friend std::ostream& operator<<(std::ostream& os, Data data);
};

Data stringToIntegerData(const std::string& S);
Data stringToRealData(const std::string& S);

namespace DataMath {

	Data add(Data lhs, Data rhs);
	Data sub(Data lhs, Data rhs);
	Data mul(Data lhs, Data rhs);
	Data div(Data lhs, Data rhs);
}