#include<iostream>
using namespace std;

int main() {

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	int total = 0;

	while (true) {
		int sum;
		cout << "�ֹ�>> ";

		char coffee[100];
		int num;

		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0)
			sum = num * 2000;

		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
			sum = num * 2300;
		else
			sum = num * 2500;
		cout << sum << "���Դϴ�. ���ְ� �弼�� \n";
		total += sum;

		if (total >= 20000)
			break;
	}
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
}