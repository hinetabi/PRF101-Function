#include <stdio.h>
#include <iostream>

using namespace std;

void swapValue(int &value1, int &value2) 
{
	int temp = value1;
	value1 = value2;
	value2 = temp;
}

int main()
{
	int a = 5; int b = 3;
	void (*pSwap) (int &, int &) = swapValue;
	
	pSwap(a, b);
//	cout << pSwap << endl;
	cout << a << " " << b << endl;
	
	return 0;
}
