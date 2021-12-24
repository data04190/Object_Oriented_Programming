#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	double sum = 0;

	while (true) {

		int num;
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> num;

		if (num == 0) break;
		v.push_back(num);
		sum += num;

		for (int i = 0; i < v.size(); i++) 
			cout << v[i] << ' ';
		cout << "\n평균 = " << sum / v.size() << endl;
	
	}
}