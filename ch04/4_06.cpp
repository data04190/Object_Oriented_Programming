#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	while (true) {

		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
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