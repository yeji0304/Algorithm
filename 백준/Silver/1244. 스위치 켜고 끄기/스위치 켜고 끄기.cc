#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>
#include <queue>

using namespace std;

int n;
int light[101];

void Male(int x) {

	for (int i = x; i <= n; i += x) {
		light[i] = !light[i];
	}
}

void Female(int x) {
	int cnt = 1;
	light[x] = !light[x];

	while ((x - cnt) > 0 && (x + cnt) <= n) {
		if (light[x - cnt] != light[x + cnt]) {
			break;
		}
		light[x - cnt] = !light[x - cnt];
		light[x + cnt] = !light[x + cnt];
		cnt++;
	}
}

int main(void) {

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> light[i];

	}

	int temp;
	cin >> temp;

	int gender, num;
	for (int i = 0; i < temp; i++) {
		cin >> gender >> num;

		if (gender == 1) {
			Male(num);
		}
		else {
			Female(num);
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << light[i] << " ";
		if (i % 20 == 0) {
			cout << "\n";
		}
	}
}