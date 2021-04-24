#include <iostream>
using namespace std;
int main()
{
	int one;
	int two;
	int sum;
	cout << "write 2 number: " << endl;
	cin >> one;
	cin >> two;
	sum = one + two;
	int razn;
	razn = one - two;
	int proizv;
	proizv = one * two;
	cout << "Sum " << sum << " Subtraction " << razn << " Multiplication " << proizv << endl;
    return 0;
}