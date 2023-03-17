#include <iostream>

using namespace std;

int main(void) {

	int num;	
	int temp = 0;

	cin >> num;

	temp = num % 5;
	
	if (num == 1 || num == 3) {
		cout << -1 << endl;
	}
	else {
		if (temp % 2 == 0) {
			cout << num / 5 + temp / 2 << "\n";
		}
		else {
			cout << num / 5 - 1 + (temp + 5) / 2 << "\n";
		}
	}
}