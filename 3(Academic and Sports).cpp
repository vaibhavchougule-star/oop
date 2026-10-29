#include <iostream>
using namespace std;
class Academic {
protected:
int marks;
public:
void getAcademic() {
cout << "Enter academic marks: ";
cin >> marks;
}
};
class Sports {
protected:
int score;
public:
void getSports() {
cout << "Enter sports score: ";
cin >> score;
}
};
class Result : public Academic, public Sports {
public:
void showResult() {
getAcademic();
getSports();
cout << "Overall score = " << marks + score << endl;
}
};
int main() {
Result r;
r.showResult();
return 0;
}