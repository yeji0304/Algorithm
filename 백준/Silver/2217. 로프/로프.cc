#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <climits>

using namespace std;

int main(void) {

	int n, temp, max_num = INT_MIN;
	cin >> n;

	std::vector<int> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	for (int i = 0; i < n; i++) {
		max_num = max(max_num, num[i] * (n - i));
	}
	cout << max_num;
}