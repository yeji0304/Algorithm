#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
int arr[1001][1001];

void snail(int n) {
	int temp = 0;
	int cnt = n*n;
	while (cnt > 0) {

		for (int i = temp; i < n; i++) {
			arr[i][temp] = cnt--;
		}

		for (int i = temp + 1; i < n; i++) {
			arr[n - 1][i] = cnt--;
		}

		for (int i = n - 2; i >= temp; i--) {
			arr[i][n - 1] = cnt--;
		}

		for (int i = n - 2; i > temp; i--) {
			arr[temp][i] = cnt--;
		}
		temp++;
		n--;
	}
}

int main(void) {
	
	int n, num;
	cin >> n >> num;

	snail(n);

	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == num) {
				y = i + 1;
				x = j + 1;
			}
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}
	cout << y << ' ' << x;
}