#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int n;
	double temp = 0;
	cin >> n;

	std::vector<int> num(n);;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end(), greater<>());
	
	temp += num[0];
	for (int i = 1; i < n; i++) {
		temp += num[i] / 2.0;
	}
    
	cout << temp;
}