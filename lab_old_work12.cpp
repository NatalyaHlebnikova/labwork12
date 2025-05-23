#include "stdio.h"
int main()
{	
	double h=13;
	double r=9.3, s;

	s=2*3.14*h*r; 
	printf("s = %lf\n",s); 
	return 0;
}

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


#include <iostream>
using namespace std;
int main()
{
	double h, r, s;

	cout << "Введіть h: ";
	cin >> h;
	cout << "Введіть r: ";
	cin >> r;

           s=2*3.14*h*r;
	cout << "s = " << s << endl;
	system("pause");
	return 0;
}