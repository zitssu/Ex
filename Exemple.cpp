#include<iostream>
using namespace std;

void function(int i) {
	int A[10];
	cout << "Element of Array A ; ";
	for ( i; i < 10; i++)
	{
		A[i] = (1 + rand() % 100);	
		cout << A[i] << "\t";
	}
}

void function2(int b) {
	int B[10];
	cout << endl << "Element of Array B ; ";
	for (b; b < 10; b++)
	{
		B[b] = (1 + rand() % 100);
		cout << B[b] << "\t";
	}
}



int main() {
	int i;
	int b;
	 function(0);
	 function2(0);

	return 0;
}
