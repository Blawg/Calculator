#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Number 1: ";
	cin >> a;
	cout << "Number 2: ";
	cin >> b;

	int sum = 0;
	sum=a+b;
	cout << sum << endl;

	int kiv = 0;
	kiv = a - b;
	cout << kiv << endl; //The cake is a lie

	return 0;
}
