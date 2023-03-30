#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	string s;
	cin >> s;

	string max, min;
	int m_cnt = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'M')
			m_cnt++;
		else {
			if (m_cnt != 0) {
				min += '1';
			}
			for (int j = 0; j < m_cnt - 1; j++) {
				min += '0';
			}
			min += '5';
			max += '5';

			for (int j = 0; j < m_cnt; j++) {
				max += '0';
			}
			m_cnt = 0;
		}
	}

	if (m_cnt != 0) {
		min += '1';
		max += '1';

		for (int i = 0; i < m_cnt - 1; i++) {
			min += '0';
			max += '1';
		}
	}

	cout << max << "\n" << min;
}