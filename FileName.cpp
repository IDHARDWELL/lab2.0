#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double z1;
	double z2;
	double m;
	double pi = atan(1.0) * 4;

	cout << " m= "; cin >> m;
	z1 = cos(m) + sin(m) + cos(3 * m) + sin(3 * m);
	z2 = 2 * sqrt(2) * cos(m) * sin((pi / 4) + 2 * m);
	if (z1 >= z2)
	{
		cout << "WOW" << endl;
	}
	else 
	{
	cout << "I knew it" << endl;
 	}
	cout << endl;
	cout << "z1= " << z1 << endl;
	cout << "z2= " << z2 << endl;
	cin.get();
	return 0;
}
