#include "Data.hpp"
#include "ProgramMemory.hpp"

Data::Data() {
	this->type = DataType::NONE;
	this->data = static_cast<integer_t>(0);
}

Data::Data(DataType type, std::any data) {
	this->type = type;
	this->data = data;
}

DataType Data::getDataType() const {
	return type;
}

std::any Data::getData() const {
	return data;
}

void Data::setDataType(DataType type) {
	this->type = type;
}

void Data::setData(std::any data) {
	this->data = data;
}

void Data::makeNumber() {
	if (type == DataType::NONE) {
		throw std::runtime_error("Invalid type of data in Data::makeNumber() function!");
	}
	if (type == DataType::VARIABLE) {
		std::string vname = as<std::string>();

		Data result = ProgramMemory.getVariableValue(vname);

		if (!result.isNumber()) {
			throw std::runtime_error("Invalid type of data in Data::makeNumber() function!");
		}

		type = result.getDataType();
		data = result.getData();
	}
}

bool Data::isNumber() const {
	return (type == DataType::INTEGER || type == DataType::REAL);
}

void Data::makeInteger() {
	if (!isNumber()) {
		throw std::runtime_error("Invalid type of data in Data::makeInteger() function!");
	}

	if (type == DataType::REAL) {
		this->data = static_cast<integer_t>(as<real_t>());
	}
	this->type = DataType::INTEGER;
}

void Data::makeReal() {
	if (!isNumber()) {
		throw std::runtime_error("Invalid type of data in Data::makeReal() function!");
	}

	if (type == DataType::INTEGER) {
		this->data = static_cast<real_t>(as<integer_t>());
	}
	this->type = DataType::REAL;
}

void Data::makeBool() {
	makeNumber();

	if (type == DataType::INTEGER) {
		integer_t value = as<integer_t>();
		if (value != static_cast<integer_t>(0)) {
			this->data = static_cast<integer_t>(1);
		}
	}
	if (type == DataType::REAL) {
		real_t value = as<real_t>();
		if (std::abs(value - static_cast<real_t>(0)) < EPS) {
			this->data = static_cast<integer_t>(0);
		}
		else {
			this->data = static_cast<integer_t>(1);
		}

		type = INTEGER;
	}
}

std::ostream& operator<<(std::ostream& os, Data data) {
	data.makeNumber();

	if (data.getDataType() == DataType::REAL) {
		os << data.as<real_t>();
	}
	if (data.getDataType() == DataType::INTEGER) {
		os << data.as<integer_t>();
	}

	return os;
}

Data stringToIntegerData(const std::string& S) {
	Data result;

	result.setDataType(DataType::INTEGER);
	result.setData(std::stoll(S));

	return result;
}

Data stringToRealData(const std::string& S) {
	Data result;

	result.setDataType(DataType::REAL);
	result.setData(std::stold(S));

	return result;
}