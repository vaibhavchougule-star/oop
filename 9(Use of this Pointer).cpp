#include <iostream>
#include <string>
using namespace std;
class Student {
int rollNo;
string name;
float marks;
public:
Student(int rollNo, string name, float marks) {
this->rollNo = rollNo;
this->name = name;
this->marks = marks;
}
void display() {
cout << "Roll number: " << rollNo;
cout << "\\nName: " << name;
cout << "\\nMarks: " << marks << endl;
}
};
int main() {
Student s(12, "Aarav", 87.5);
s.display();
return 0;
}