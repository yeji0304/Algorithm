#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int N, machineDuch;
	cin >> N;

	vector<int> arr;

	for (int i = 0; i < 14; i++) {
		cin >> machineDuch;
		arr.push_back(machineDuch);
	}

	int cnt = 0, up = 0, down = 0, jun = 0, sung = 0, total = N;

	int result = 0;
	for (int i = 0; i < 14; i++) {
		if (arr[i] <= N) {
			jun += N / arr[i];
			total %= arr[i];
			break;
		}
	}
	jun = +arr[13] * jun + total;

	total = N;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i - 1] < arr[i]) {
			up++;
			down = 0;
		}
		else if (arr[i - 1] > arr[i]) {
			up = 0;
			down++;
		}

		if (up == 3 && sung > 0) {
			sung = sung*arr[i] + total;
			cnt++;
		}
		else if (down >= 3 && arr[i] <= total) {
			sung += total / arr[i];
			total %= arr[i];
		}

		if (i == 13) {
			if (cnt == 0) {
				sung = sung * arr[13] + total;
			}
		}
	}

	if (sung > jun) {
		cout << "TIMING";
	}
	else if (sung < jun) {
		cout << "BNP";
	}
	else {
		cout << "SAMESAME";
	}
}