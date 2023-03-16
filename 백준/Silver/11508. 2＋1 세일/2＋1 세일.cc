#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int n;
	long temp = 0;
	cin >> n;

	std::vector<int> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end(), greater<int>());

	for (int i = 0; i < n; i+=3) {
		if (i + 1 < n || i + 2 < n)
			temp += num[i] + num[i + 1];
		else {	
			temp += num[i];
			if (i + 1 < n) {
				temp += num[i + 1];
			}
		}
	}
	cout << temp;
}