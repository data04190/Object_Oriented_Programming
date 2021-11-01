#include<iostream>
#include<string>
using namespace std;

class Board {

public:
	static int num;
	static string* content;
	static void add(string text);
	static void print();
};

void Board::add(string text) {
	content[num] = text;
	num++;
}

void Board::print() {
	cout << "***********************  �Խ����Դϴ�. ****************************" << endl;
	for (int i = 0; i < num; i++)
		cout << i << ": " << content[i] << endl;
	cout << endl;
}

int Board::num = 0;
string* Board::content = new string[10];
int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}