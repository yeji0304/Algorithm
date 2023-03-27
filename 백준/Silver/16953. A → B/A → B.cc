#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int a, b;
	cin >> a >> b;

	int cnt = 0;

	while (b>=a) {
		if (a == b) {
			cout << cnt + 1;
			break;
		}
		
		if (b % 10 == 1) {
			b = b / 10;
		}
		else if (b % 2 == 0) {
			b /= 2;
		}
		else {
			cout << -1;
			break;
		}
        cnt++;
	}

	if(a>b)
		cout << -1;
}