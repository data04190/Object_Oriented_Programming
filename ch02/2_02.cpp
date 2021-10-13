#include<iostream>
using namespace std;

int main() {

	for (int i = 1; i < 10; i++) {

		for (int dan = 1; dan< 10; dan++) {
			cout << dan << 'x' << i << '=' << dan * i << '\t';
		}
		cout << endl;
	}
}