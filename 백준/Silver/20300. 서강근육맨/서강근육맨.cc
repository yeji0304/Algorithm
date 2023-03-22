#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int n;
	cin >> n;

	std::vector<long> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	long temp = 0;
	if (n % 2 == 0) {
		for (int i = 0; i < n; i++) {
			temp = max(temp, num[i] + num[n - 1 - i]);
		}
	}

	else {
		temp = num[n - 1];
		for (int i = 0; i < n - 1; i++) {
			temp = max(temp, num[i] + num[n - 2 - i]);
		}
	}
	cout << temp;
}