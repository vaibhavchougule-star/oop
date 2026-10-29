#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
int rollNo;
string name;
public:
void getStudent() {
cout << "Enter roll number and name: ";
cin >> rollNo >> name;
}
};
class Marks : public Student {
protected:
float m1, m2, m3;
public:
void getMarks() {
getStudent();
cout << "Enter marks in three subjects: ";
cin >> m1 >> m2 >> m3;
}
};
class Result : public Marks {
public:
void displayResult() {
getMarks();
float total = m1 + m2 + m3;
float percentage = total / 3.0f;
cout << "\\nName: " << name << "\\nRoll No: " << rollNo;
cout << "\\nTotal: " << total;
cout << "\\nPercentage: " << percentage << "%";
if (percentage >= 90) cout << "\\nGrade: A";
else if (percentage >= 75) cout << "\\nGrade: B";
else if (percentage >= 60) cout << "\\nGrade: C";
else if (percentage >= 40) cout << "\\nGrade: D";
else cout << "\\nGrade: F";
}
};
int main() {
Result r;
r.displayResult();
return 0;
}