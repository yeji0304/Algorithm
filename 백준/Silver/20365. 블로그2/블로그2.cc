#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int n;
	cin >> n;

	string s;
	cin >> s;

	bool color = true;

	int r_cnt = 0, b_cnt = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			if (color) {
				r_cnt++;
				color = false;
			}
		}
		else {
			color = true;
		}
	}

	color = true;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'B') {
			if (color) {
				b_cnt++;
				color = false;
			}
		}
		else {
			color = true;
		}
	}

	cnt = min(r_cnt, b_cnt);
	cout << cnt+1;

}