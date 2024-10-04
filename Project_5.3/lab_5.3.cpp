#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double z(const double x);

int main()
{
	double gp, gk, r;
	int n;

	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "k" << "   |"
		<< setw(10) << "r" << " |" << endl;
	cout << "----------------------" << endl;

	double dg = (gk - gp) / n;
	double k = gp;
	while (k <= gk)
	{
		r = z(2*k+1)-z(2*k-1)*z(2 * k - 1)+sqrt(z(k));
		cout << "|" << setw(7) << setprecision(2) << k << " |"
			<< setw(10) << setprecision(5) << r << " |" << endl;
		cout << "----------------------" << endl;
		k += dg;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + 1) / (sin(x)*sin(x)+exp(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = -x / j;
			a *= R;
			S += a;
		} while (j <= 7);
		return (S/exp(x));
	}
}