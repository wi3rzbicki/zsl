#include <iostream>

using namespace std;

class Rectangle {
	public:
	int a;
	int b;
};
		
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Rectangle one;
	one.a=2;
	one.b=3;
	cout << "obwód wynosi: " << 2*one.a+2*one.b << endl << "pole wynosi: " << one.a*one.b;
	
	return 0;
}
