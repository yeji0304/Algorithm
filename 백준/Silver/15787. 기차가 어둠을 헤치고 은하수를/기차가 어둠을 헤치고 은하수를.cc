#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
	
	int N, M;
	cin >> N >> M;

	int seat;
	vector<int> train(N + 1);

	for (int i = 0; i < M; i++) {
		int order, trainNum;
		cin >> order >> trainNum;

		switch (order) {
			case 1: {
				cin >> seat;
				train[trainNum] |= 1 << seat;
				break;
			}
			case 2: {
				cin >> seat;
				train[trainNum] &= ~(1 << seat);
				break;
			}
			case 3: {
				train[trainNum] <<= 1;
				train[trainNum] &= ((1 << 21) - 1);
				break;
			}
			case 4: {
				train[trainNum] >>= 1;
				train[trainNum] &= ~1;
				break;
			}
		}
	}

	set<int> s;
	for (int i = 1; i <= N; i++) {
		s.insert(train[i]);
	}
	cout << s.size();
}
