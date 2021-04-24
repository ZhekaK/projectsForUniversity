#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "write a: ";
	cin >> a;
	cout << "write b: ";
	cin >> b;
	int c;
	c = a;
	a = b;
	b = c;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
    return 0;
}