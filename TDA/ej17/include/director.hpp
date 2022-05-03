#pragma once

#include "employee.hpp"

class Director : public Employee {
    private:
        static constexpr double percentage_ = 10;
    public:
        Director() : Employee() {};
        Director(std::string name, std::string surname,
            size_t id, double salary, int yos) :
            Employee(name, surname, id, salary, yos) {};
        void incrementSalary();
};
