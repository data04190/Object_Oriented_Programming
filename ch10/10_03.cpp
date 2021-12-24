#include<iostream>
using namespace std;

template <class T1>
void reverseArray(T1* x, int n) {
	for (int i = 0; i <= n / 2; i++) {
		T1 tmp = x[i];
		x[i] = x[n - 1 - i];
		x[n - 1 - i] = tmp;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';

}