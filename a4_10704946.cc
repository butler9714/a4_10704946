Jeffrey Butler Assignment 4

#include <iostream>
Using namespace std;
Int hcf(int n1, int n2);
	int main()
{
	int n1, n2;
	cout << "Enter any two positive integers:";
	cin >> n1>> n2;
	cout << "The GCD of" << n1 << "&" << "is" << hcf(n1,n2);
	return 0;
}
Int hcf (int n1, int n2)
{
	if (n2 !=0)
	return hcf(n2, n1 % n2);
	else
	return n1;
}
