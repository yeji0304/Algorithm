#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>

using namespace std;

int main(void) {

	int N, A, B;
	cin >> N;

	vector<pair<int, int>> arr;

	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		arr.push_back(make_pair(B, A));
	}

	sort(arr.begin(), arr.end());

	int time = arr[0].first;
	int cnt = 1;

	for (int i = 1; i < N; i++) {
		if (time <= arr[i].second) {
			cnt++;
			time = arr[i].first;
		}
	}
	cout << cnt;

}