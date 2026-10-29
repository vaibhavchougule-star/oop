#include <iostream>
using namespace std;
class Payment {
public:
virtual void processPayment() {
cout << "Processing payment\\n";
}
};
class CreditCardPayment : public Payment {
public:
void processPayment() override {
cout << "Processing credit card payment\\n";
}
};
class UPIPayment : public Payment {
public:
void processPayment() override {
cout << "Processing UPI payment\\n";
}
};
class NetBankingPayment : public Payment {
public:
void processPayment() override {
cout << "Processing net banking payment\\n";
}
};
int main() {
CreditCardPayment c;
UPIPayment u;
NetBankingPayment n;
c.processPayment();
u.processPayment();
n.processPayment();
return 0;
}