#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {

	string str;
	int n;
	cin >> str >> n;

	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if ('0' <= str[i] && str[i] <= '9') {
			sum = sum * n + (int)str[i] - (int)'0';
		}
		else {
			sum = sum * n + (int)str[i] - (int)'A' + 10;
		}
	}
	cout << sum << "\n";
}