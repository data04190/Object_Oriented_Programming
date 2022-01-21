#include<iostream>
#include<string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }

};
class NamedCircle :public Circle {
	string name;
public:

	NamedCircle(int radius = 0, string name = "") : Circle(radius) { this->name = name; }
	void show() { cout << "�������� " << getRadius() << "�� " << this->name; }
	void setName(string name) { this->name = name; }
	string getName() { return this->name; }
};

int main() {
	NamedCircle pizza[5];
	int radius;
	string name;
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	double big = pizza[0].getArea();
	name = pizza[0].getName();
	for (int i = 0; i < 5; i++) {
		if (pizza[i].getArea() > big) {
			big = pizza[i].getArea();
			name = pizza[i].getName();
		}
	}
	cout << "���� ������ ū ���ڴ� " << name << "�Դϴ�." << endl;

}