#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
string name;
public:
void getPerson() {
cout << "Enter name: ";
cin >> name;
}
};
class Student : public Person {
protected:
int rollNo;
public:
void getStudent() {
getPerson();
cout << "Enter roll number: ";
cin >> rollNo;
}
};
class Employee : public Person {
protected:
int employeeId;
public:
void getEmployee() {
getPerson();
cout << "Enter employee ID: ";
cin >> employeeId;
}
};
class TeachingAssistant : public Student, public Employee {
public:
void showDetails() {
// Student and Employee each have their own Person base in this version.
getStudent();
getEmployee();
cout << "\\nStudent name: " << Student::name;
cout << "\\nRoll number: " << rollNo;
cout << "\\nEmployee name: " << Employee::name;
cout << "\\nEmployee ID: " << employeeId << endl;
}
};
int main() {
TeachingAssistant ta;
ta.showDetails();
return 0;
}