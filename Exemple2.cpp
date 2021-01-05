#include<iostream>
using namespace std;

void mai() {
	int salary = 2000;
	int mada = 1500;
	int masa = 1000;
	int i;
	int input;
	cout << "Month = ";
	cin >> input ;
	int total;
	for ( i = 0; i <= input; i++)
	{
		total = salary + (mada + (i-1)*50) - (masa + ((i-1)*100));
	}
	cout << "Your Credit is = " << total << endl;
}
int main() {
	mai();
	mai();
	mai();
	mai();

}
