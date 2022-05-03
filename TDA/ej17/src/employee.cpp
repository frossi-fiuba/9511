#include "employee.hpp"

// constructors
Employee::Employee() = default;

Employee::Employee(std::string name, std::string surname, size_t id, double salary, int yos) :
    name_(name),
    surname_(surname),
    id_(id),
    salary_(salary),
    yos_(yos) {}

// general methods

void Employee::incrementarSalary(double percentage) {
    salary_ *= (1 + percentage / 100);
}

// getters

const std::string Employee::Name() const {
    return name_;
}

const std::string Employee::Surname() const {
    return surname_;
}

const std::string Employee::Fullname() const {
    return name_ + ' ' + surname_;
}

const size_t Employee::Id() const {
    return id_;
}
const double Employee::Salary() const {
    return salary_;
}
const int Employee::YearsOfService() const {
    return yos_;
}

// setters

std::string& Employee::Name() {
    return name_;
}

std::string& Employee::Surname() {
    return surname_;
}

size_t& Employee::Id() {
    return id_;
}
double& Employee::Salary() {
    return salary_;
}
int& Employee::YearsOfService() {
    return yos_;
}
