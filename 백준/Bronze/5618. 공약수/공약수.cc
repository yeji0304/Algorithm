#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	int n, a, b, c, temp;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 1; i <= arr[0]; i++) {
		int count = 0;

		for (int j = 0; j < n; j++) {
			if (arr[j] % i == 0) {
				count++;
			}
		}

		if (count == n) {
			cout << i << "\n";
		}
	}
}