#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int capacity;
	int tos;
	int* p;
public:
	IntStack(int size);
	~IntStack();
	bool push(int n);
	bool pop(int& n);
	int size() { return tos; }
};

IntStack::IntStack(int size) {
	p = new int[size];
	this->capacity = size;
	tos = 0;
}

IntStack::~IntStack() {
	if (p)
		delete[] p;
}

bool IntStack::push(int n) {
	if (tos >= capacity) 
		return false;

	p[tos] = n;
	tos++;
	return true;
}

bool IntStack::pop(int& n) {
	if (tos == 0) 
		return false;

	tos--;
	n = p[tos];
	return true;
}


int main() {
	IntStack a(5);
	for (int i = 0; i < 10; i++) { 
		if (a.push(i)) cout << "push ����" << endl;
		else cout << "���� full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) { 
		if (a.pop(n)) cout << "pop ���� " << n << endl;
		else cout << "���� empty" << endl;
	}

}