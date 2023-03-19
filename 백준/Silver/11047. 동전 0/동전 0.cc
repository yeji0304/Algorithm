#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int n, k;
	long temp = 0;
	cin >> n >> k;

	std::vector<int> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end(), greater<int>());


	int i = 0;
	while (true) {
		if (num[i] <= k) {
			k -= num[i];
			temp++;
			i--;
		}

		if (k < 0) {
			k += num[i];
			temp--;
		}

		if (k == 0) {
			cout << temp;
			break;
		}
		i++;
	}
}