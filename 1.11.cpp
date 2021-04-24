#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a = 3;
	int b = -10;
	int c = 1;
	int x1;
	int x2;
	int d;
	d = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(d))/ (2 * a);
	x2 = (-b - sqrt(d))/ (2 * a);
	
	cout << x1 << endl;
	cout << x2 << endl;
	
    return 0;
}