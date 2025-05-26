#include "Data.hpp"

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

	if (!data.isCorrect()) {
		throw std::runtime_error("Invalid type of data in consoleDataOutput function!");
	}

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

namespace DataMath {

	Data add(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::add() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::add() function!");
		}

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			result.setData(lhs.as<integer_t>() + rhs.as<integer_t>());
		}
		else {

			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() + rhs.as<real_t>());
		}

		return result;
	}

	Data sub(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::sub() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::sub() function!");
		}

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			result.setData(lhs.as<integer_t>() - rhs.as<integer_t>());
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() - rhs.as<real_t>());
		}

		return result;
	}

	Data mul(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::mul() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::mul() function!");
		}

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			result.setData(lhs.as<integer_t>() * rhs.as<integer_t>());
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() * rhs.as<real_t>());
		}

		return result;
	}

	Data div(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::div() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::div() function!");
		}

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			if (rhs.as<integer_t>() == 0) {
				throw std::runtime_error("It is forbidden to divide by an integer 0!");
			}
			result.setData(lhs.as<integer_t>() / rhs.as<integer_t>());
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() / rhs.as<real_t>());
		}

		return result;
	}
}