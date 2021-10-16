#include<iostream>
using namespace std;

int main() {

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	int total = 0;

	while (true) {
		int sum;
		cout << "주문>> ";

		char coffee[100];
		int num;

		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0)
			sum = num * 2000;

		else if (strcmp(coffee, "아메리카노") == 0)
			sum = num * 2300;
		else
			sum = num * 2500;
		cout << sum << "원입니다. 맛있게 드세요 \n";
		total += sum;

		if (total >= 20000)
			break;
	}
	cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}