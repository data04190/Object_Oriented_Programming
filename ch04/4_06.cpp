#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	while (true) {

		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
		getline(cin, s, '\n');

		if (s == "exit")
			break;

		int len = s.length();

		for (int i = len; i > 0; i--) {
			string last = s.substr(i - 1, 1);
			cout << last;
		}
		cout << endl;
	}
}