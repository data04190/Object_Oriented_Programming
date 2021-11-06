#include<iostream>
using namespace std;


int big(int n1, int n2, int n3 = 100) {

	int max = (n1 > n2) ? n1 : n2;
	if (max > n3)
		return n3;
	else
		return max;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}