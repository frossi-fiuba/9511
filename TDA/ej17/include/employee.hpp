#pragma once

#include <iostream>
#include <cstddef>

class Employee {
    protected:
        std::string name_;
        std::string surname_;
        size_t id_;
        double salary_;
        int yos_;
        // general methods
        void incrementSalary(double percentage);
    public:
        // constructors
        Employee();
        Employee(std::string name, std::string surname, size_t id, double salary, int yos);
        // getters
        const std::string Name() const;
        const std::string Surname() const;
        const std::string Fullname() const;
        const size_t Id() const;
        const double Salary() const;
        const int YearsOfService() const;
        // setters
        std::string& Name();
        std::string& Surname();
        size_t& Id();
        double& Salary();
        int& YearsOfService();

        // virtual
        virtual void incrementSalary() = 0;

};
