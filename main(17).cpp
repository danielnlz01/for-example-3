#include <iostream>
#include <cmath>

using namespace std;

double a, x;

int main() 
{
	x = 1; 
	
	cout << "we will approximate the square root of 'a'" << endl << "give me a: ";
	cin >> a;
	
	for (int i = 0; i < 10; i++)
	{
		x = (x + (a / x)) / 2;
		cout << x << endl;
	}
	
	cout << "the approximation of the square root of " << a << " is: " << x << endl;
	
  return 0;
}