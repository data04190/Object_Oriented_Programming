#include<iostream>
using namespace std;

int main() {
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요." << endl;
	char name[5][100];
	for (int i = 0; i < 5; i++)
		cin.getline(name[i], 100, ';');

	for (int i = 0; i < 5; i++)
		cout << i + 1 << " : " << name[i] << endl;

	int max = 0;
	int index;

	for (int i = 0; i < 5; i++) {
		int  n = strlen(name[i]);

		if (n > max) {
			max = n;
			index = i;
		}
	}
	cout << "가장 긴 이름은 " << name[index];
}