#pragma once

#include <employee.hpp>

class Boss : public Employee {
    private:
        static constexpr double percentage_ = 15;
    public:
        Boss() : Employee() {};
        Boss(std::string name, std::string surname,
            size_t id, double salary, int yos) :
            Employee(name, surname, id, salary, yos) {};
        void incrementSalary();
};
