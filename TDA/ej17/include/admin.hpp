#pragma once

#include "employee.hpp"

class Admin : public Employee {
    private:
        static constexpr double percentage_ = 20;
    public:
        Admin() : Employee() {};
        Admin(std::string name, std::string surname,
            size_t id, double salary, int yos) :
            Employee(name, surname, id, salary, yos) {};
        void incrementSalary();
};
