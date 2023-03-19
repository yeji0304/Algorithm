#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int n;
	long temp = 0, ans = 0;
	cin >> n;

	std::vector<int> num(n);
	std::vector<int> won(n);

	for (int i = 0; i < n-1; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> won[i];
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			temp += num[j - 1];

			if (won[i] > won[j] && i != (n - 2)) {
				ans += won[i] * temp;
				temp = 0;
				break;
			} else if (won[i] == won[j]) {
				if (j == n - 1) {
					ans += won[i] * temp;
					cout << ans << "\n";
					return 0;
				}
			}
		}
	}
	cout << ans << "\n";
}