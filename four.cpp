#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	float sum;
	cout << "write cells: ";
	cin >> n;
	cout << "write rabbit: ";
	cin >> m;
	sum = m / n;
	if(sum >= .1f)
	{
		sum = sum + 1;
	}
	cout << sum << endl;
	
    return 0;
}