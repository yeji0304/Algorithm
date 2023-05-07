#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

int main() {
	
	string s;
	cin >> s;
	
	int size = s.size();
	vector<int> arr(size);

	int max_num = 0;
	arr[0] = size;

	for (int i = 0; i < s.size(); i++) {
		int n = 0;
		if (s.at(i) == 'q') {
			n = 1;
		}
		if (s.at(i) == 'u') {
			n = 2;
		}
		if (s.at(i) == 'a') {
			n = 3;
		}
		if (s.at(i) == 'c') {
			n = 4;
		}
		if (s.at(i) == 'k') {
			n = 5;
		}
		if (arr[n-1] == 0) {
			cout << -1;
			return 0;
		}
		arr[n]++;
		arr[n - 1]--;
		max_num = max(max_num, arr[1] + arr[2] + arr[3] + arr[4]);
	}
	
	if (arr[5] * 5 != size) {
		cout << -1;
		return 0;
	}
	cout << max_num;
}