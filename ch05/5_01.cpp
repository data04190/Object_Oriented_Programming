#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	int getRadius() { return this->radius; }
	void setRadius(int radius) { this->radius = radius; }
};
void swap(Circle& a, Circle& b) {
	int tmp;
	tmp = a.getRadius();
	a.setRadius(b.getRadius());
	b.setRadius(tmp);
}

int main() {

	Circle c1(1), c2(2);
	swap(c1, c2);
	cout << "c1 반지름 : " << c1.getRadius() << endl;
	cout << "c2 반지름 : " << c2.getRadius() << endl;
}