#include<iostream>
using namespace std;
int main()
{
	int x, y, d, r, k, j = 0;
	cin >> x >> y;
	if (x == 1)
		d = y % 7;
	else {
		for (int i = x - 1; i>0; i--)
		{
			switch (i) {
			case 1:case 3:case 5:case 7:case 8: case 10: case 12: r = 3; break;
			case 2: r = 0; break;
			case 4:case 6:case 9:case 11: r = 2; break;
			}
			j += r;
		}
		k = (y % 7) + j;
		d = k % 7;
	}
	switch (d) {
	case 1: cout << "MON" << endl; break;
	case 2: cout << "TUE" << endl; break;
	case 3: cout << "WED" << endl; break;
	case 4: cout << "THU" << endl; break;
	case 5: cout << "FRI" << endl; break;
	case 6: cout << "SAT" << endl; break;
	case 0: cout << "SUN" << endl; break;
	}
}