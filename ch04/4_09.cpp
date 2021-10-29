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

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {

		cout << "사람 " << i + 1 << ">> ";
		string s;
		getline(cin, s, '\n');

		int index = s.find(' ');
		string n1, n2;
		n2 = s.substr(index + 1);
		n1 = s.substr(0, index);

		p[i].set(n1, n2);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++)
		cout << p[i].getName() << " ";
	cout << "\n전화번호 검색합니다. 이름을 입력하세요>>";

	string q;
	getline(cin, q, '\n');

	for (int i = 0; i < 3; i++) {
		if (q == p[i].getName()) {
			cout << "전화 번호는 " << p[i].getTel() << endl;
		}
	}
}