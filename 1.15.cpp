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
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
    return 0;
}