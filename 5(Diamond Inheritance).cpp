#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
string name;
public:
void getName() {
cout << "Enter name: ";
cin >> name;
}
};
class Student : virtual public Person {
protected:
int rollNo;
public:
void getRollNo() {
cout << "Enter roll number: ";
cin >> rollNo;
}
};
class Employee : virtual public Person {
protected:
int employeeId;
public:
void getEmployeeId() {
cout << "Enter employee ID: ";
cin >> employeeId;
}
};
class TeachingAssistant : public Student, public Employee {
public:
void getDetails() {
getName(); // Only one shared Person object
getRollNo();
getEmployeeId();
}
void display() {
cout << "\\nName: " << name;
cout << "\\nRoll number: " << rollNo;
cout << "\\nEmployee ID: " << employeeId << endl;
}
};
int main() {
TeachingAssistant ta;
ta.getDetails();
ta.display();
return 0;
}