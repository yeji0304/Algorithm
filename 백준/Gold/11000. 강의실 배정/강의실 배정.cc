#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
#include <functional>
#include <queue>

using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void) {

	int N;
	cin >> N;

	vector<pair<int, int>> lecture;

	for (int i = 0; i < N; i++) {
		int start, end;

		cin >> start >> end;
		lecture.push_back(make_pair(start, end));
	}

	sort(lecture.begin(), lecture.end());
	pq.push(lecture[0].second);

	for (int i = 1; i < N; i++) {
		if (pq.top() <= lecture[i].first) {
			pq.pop();
		}
		pq.push(lecture[i].second);
	}
	cout << pq.size();
}