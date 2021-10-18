#include<iostream>
#include<string>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string name, int id, int balance);
	void deposit(int money);
	string getOwner();
	int withdraw(int money);
	int inquiry();
};
Account::Account(string name, int id, int balance) {
	this->name = name;
	this->id = id;
	this->balance = balance;
}
void Account::deposit(int money) {
	this->balance += money;
}
string Account::getOwner() {
	return this->name;
}
int Account::withdraw(int money) {
	this->balance -= money;
	return money;

}
int Account::inquiry() {
	return this->balance;
}
int main() {

	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}