#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	double sum = 0;

	while (true) {

		int num;
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> num;

		if (num == 0) break;
		v.push_back(num);
		sum += num;

		for (int i = 0; i < v.size(); i++) 
			cout << v[i] << ' ';
		cout << "\n��� = " << sum / v.size() << endl;
	
	}
}