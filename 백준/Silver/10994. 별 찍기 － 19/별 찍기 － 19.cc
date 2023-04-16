#include <iostream>
#include <algorithm>

using namespace std;

char star[401][401];

void starStamp(int x, int num) {
	for (int i = x; i < num; i++) {
		star[x][i] = '*';
		star[num - 1][i] = '*';
		star[i][x] = '*';
		star[i][num - 1] = '*';
	}

	if (num == 1) {
		return;
	}

	starStamp(x + 2, num - 2);
}

int main(void) {
	int n;
	cin >> n;

	int num = (n - 1) * 4 + 1;
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			star[i][j] = ' ';
		}
	}

	starStamp(0, num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << star[i][j];
		}
		cout << "\n";
	}
}