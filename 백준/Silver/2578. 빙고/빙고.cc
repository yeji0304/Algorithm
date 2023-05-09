#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;
int bingo[5][5];
int map[5][5];
int cnt_total, num;

void Wid() {
	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		for (int j = 0; j < 5; j++) {
			if (bingo[i][j] == 0)
				cnt++;
		}
		if (cnt == 5) {
			cnt_total++;
		}
	}
}

void Hei() {
	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		for (int j = 0; j < 5; j++) {
			if (bingo[j][i] == 0)
				cnt++;
		}
		if (cnt == 5) {
			cnt_total++;
		}
	}
}

void Dia_right() {
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (bingo[i][i]==0) 
			cnt++;
	}
	if (cnt == 5) {
		cnt_total++;
	}
}

void Dia_left() {
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (bingo[4-i][i] == 0)
			cnt++;
	}

	if (cnt == 5) {
		cnt_total++;
	}
}

int Bingo(int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (bingo[i][j] == n) {
				bingo[i][j] = 0;
			}
		}
	}
	return 0;
}

int main() {

	int n;
	num = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> bingo[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			num++;
			cin >> n;
			Bingo(n);
			Wid();
			Hei();
			Dia_right();
			Dia_left();

			if (cnt_total >= 3) {
				cout << num;
				return 0;
			}
			cnt_total = 0;
		}
	}
}
