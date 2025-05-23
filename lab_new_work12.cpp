#include "stdio.h"
int main()
{	
	double h=6.5;
	double r=4.3, V;

	V=3.14*r*r*h; 
	printf("V = %lf\n",V); 
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	double h, r, V;

	cout << "Введіть h: ";
	cin >> h;
	cout << "Введіть r: ";
	cin >> r;

    V=3.14*r*r*h;
	cout << "V =" << V << endl;
	system("pause");
	return 0;
}