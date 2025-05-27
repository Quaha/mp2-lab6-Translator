#include "Data.hpp"
#include "ProgramMemory.hpp"

Data::Data() {
	this->type = DataType::NONE;
	this->data = 0;
	this->flags = DataFlags::None;
}

Data::Data(DataType type, std::any data, flag_t flags) {
	this->type = type;
	this->data = data;
	this->flags = flags;
}

DataType Data::getDataType() const {
	return type;
}

std::any Data::getData() const {
	return data;
}

flag_t Data::getFlags() const {
	return flags;
}

void Data::setDataType(DataType type) {
	this->type = type;
}

void Data::setData(std::any data) {
	this->data = data;
}

void Data::setFlags(flag_t flags) {
	this->flags = flags;
}

bool Data::checkFlags(flag_t flags) const {
	return (this->flags & flags);
}

bool Data::isCorrect() const {
	return !checkFlags(DataFlags::IncorrectData);
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

	flags = DataFlags::None;
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