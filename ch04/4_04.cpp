#include<iostream>
#include<string>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample() {};
};
void Sample::read() {

	string s;
	getline(cin, s ,'\n');

	int startindex = 0;
	for (int i = 0; i < size; i++) {
		int findex = s.find(' ', startindex);
		if (findex == -1) {
			string part = s.substr(startindex);
			if (part == "") break;
		}
		int count = findex - startindex;
		string part = s.substr(startindex, count);
		int num = stoi(part);
		p[i] = num;
		startindex = findex + 1;
		
	}
		
}
void Sample::write() {
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}
int Sample::big() {
	int max = 0;

	for (int i = 0; i < size; i++) {
		if (p[i] > max)
			max = p[i];
	}
	return max;
}
int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;

}
