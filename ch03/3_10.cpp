#include<iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Add::setValue(int x, int y) {
	this->a = x; this->b = y;
}
int Add::calculate() {
	return a + b;
}

class Sub {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Sub::setValue(int x, int y) {
	this->a = x; this->b = y;
}
int Sub::calculate() {
	return this->a - this->b;
}
class Mul {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Mul::setValue(int x, int y) {
	this->a = x; this->b = y;
}
int Mul::calculate() {
	return this->a * this->b;
}
class Div {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Div::setValue(int x, int y) {
	this->a = x, this->b = y;
}
int Div::calculate() {
	return a / b;
}

int main() {

	Add a;
	Sub s;
	Mul m;
	Div d;
	int n1, n2, value;
	char w;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> n1 >> n2 >> w;
		if (w == '*') {
			m.setValue(n1, n2);
			value = m.calculate();
		}
		else if (w == '/') {
			d.setValue(n1, n2);
			value = d.calculate();
		}
		else if (w == '-') {
			s.setValue(n1, n2);
			value = s.calculate();
		}
		else {
			a.setValue(n1, n2);
			value = a.calculate();
		}
		cout << value << endl;
	}
}
