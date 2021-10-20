#include<iostream>
#include<string>
using namespace std;

class Integar {
	int num;

public:
	Integar(int r) { num = r; };
	Integar(string s);

	int get();
	void set(int r);
	int isEven();

};
Integar::Integar(string s) {
	int n = stoi(s);
	this->num = n;
}

int Integar::get() {
	return this->num;
}
void Integar::set(int r) {
	this->num = r;
}
int Integar::isEven() {
	if (this->num % 2 == 0)
		return 1;
	else
		return 0;
}

int main() {

	Integar n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integar m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
