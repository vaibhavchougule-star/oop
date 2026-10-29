#include <iostream>
using namespace std;
class Payment {
public:
virtual void processPayment() = 0; // Pure virtual function
virtual ~Payment() {}
};
class CreditCardPayment : public Payment {
public:
void processPayment() override {
cout << "Paid using credit card\\n";
}
};
class UPIPayment : public Payment {
public:
void processPayment() override {
cout << "Paid using UPI\\n";
}
};
class CashPayment : public Payment {
public:
void processPayment() override {
cout << "Paid using cash\\n";
}
};
int main() {
CreditCardPayment c;
UPIPayment u;
CashPayment cash;
Payment* ptr;
ptr = &c; ptr->processPayment();
ptr = &u; ptr->processPayment();
ptr = &cash; ptr->processPayment();
return 0;
}