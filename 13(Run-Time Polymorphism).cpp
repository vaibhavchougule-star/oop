#include <iostream>
using namespace std;
class Employee {
public:
virtual float calculateSalary() {
return 0;
}
virtual ~Employee() {}
};
class PermanentEmployee : public Employee {
float monthlySalary, bonus;
public:
PermanentEmployee(float salary, float b) : monthlySalary(salary), bonus(b) {}
float calculateSalary() override {
return monthlySalary + bonus;
}
};
class ContractEmployee : public Employee {
float ratePerDay;
int daysWorked;
public:
ContractEmployee(float rate, int days) : ratePerDay(rate), daysWorked(days) {}
float calculateSalary() override {
return ratePerDay * daysWorked;
}
};
int main() {
PermanentEmployee p(30000, 5000);
ContractEmployee c(1000, 20);
Employee* ptr;
ptr = &p;
cout << "Permanent employee salary = " << ptr->calculateSalary() << endl;
ptr = &c;
cout << "Contract employee salary = " << ptr->calculateSalary() << endl;
return 0;
}