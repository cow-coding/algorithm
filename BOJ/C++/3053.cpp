#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setprecision(6) << fixed;
	const double pi = 3.14159265358979323846;
	double euclid;
	double taxi;
	int rad;

	cin >> rad;

	euclid = rad * rad * pi;
	taxi = rad * rad * 2.00000000;

	cout << euclid << "\n" << taxi << endl;

}
