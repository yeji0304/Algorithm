#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	string s;
	cin >> s;

	bool minus = false;
	int result = 0;
	string num;

	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == '-' || s[i] == '+' || i == s.size()) {
			if (minus == true) {
				result -= stoi(num);
				num = "";
			}
			else if (minus == false) {
				result += stoi(num);
				num = "";
			}
		}
		else {
			num += s[i];
		}

		if (s[i] == '-') {
			minus = true;
		}
	}
	cout << result;
}