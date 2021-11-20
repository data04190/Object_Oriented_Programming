#include<iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	Color operator+ (Color c1);
	bool operator==(Color c1);
};

Color Color::operator+(Color c1) {
	Color c;
	c.red = this->red + c1.red;
	c.green = this->green + c1.green;
	c.blue = this->blue + c1.blue;
	return c;
}
bool Color::operator==(Color c1) {
	if (this->red == c1.red && this->green == c1.green && this->blue == c1.blue)
		return true;
	else false;
}

int main() {

	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}