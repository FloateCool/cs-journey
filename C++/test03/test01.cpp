#include <iostream>
#include "Chapter6.h"
using std::cout;
using std::endl;

double fact(double a)
{
	return a*a;
}

int main()
{
	double a = 3.14;
	cout<<fact(a)<<endl;
	return 0;
}
