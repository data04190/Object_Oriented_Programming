#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string tel;

public:
	Person() { };
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {

	Person p[3];

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {

		cout << "��� " << i + 1 << ">> ";
		string s;
		getline(cin, s, '\n');

		int index = s.find(' ');
		string n1, n2;
		n2 = s.substr(index + 1);
		n1 = s.substr(0, index);

		p[i].set(n1, n2);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++)
		cout << p[i].getName() << " ";
	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";

	string q;
	getline(cin, q, '\n');

	for (int i = 0; i < 3; i++) {
		if (q == p[i].getName()) {
			cout << "��ȭ ��ȣ�� " << p[i].getTel() << endl;
		}
	}
}