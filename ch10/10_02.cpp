#include<iostream>
using namespace std;

template <class T1, class T2>
bool equalArrays(T1 x[], T2 y[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] != y[i])
			return false;
	}
	return true;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };
	if (equalArrays(x, y, 5)) cout << "같다";
	else cout << "다르다";

}