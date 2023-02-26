#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int acd(int a, int b) {
	int r = a%b;

	if (r == 0) {
		return b;
	}
	else {
		return acd(b, r);
	}
}

int main(void) {

	int n1, n2;
	cin >> n1 >> n2;

	int max = 0;
	if (n1 >= n2) {
		max = acd(n1, n2);
	}
	else {
		max = acd(n2, n1);
	}

	cout << max << "\n";
	cout << n1*n2 / max << "\n";
}