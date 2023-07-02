#include <iostream>
#include <algorithm>


using namespace std;
int adjList[101][101];
bool visited[101];
int n, m, cnt = 0;

void dfs(int start) {
	visited[start] = true;
	cnt ++;

	for (int i = 1; i <= n; i++) {
		if (adjList[start][i] == 1 && !visited[i]) {
			dfs(i);
		}
	}
}

int main() {
	
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		
		int v1, v2;
		cin >> v1 >> v2;

		adjList[v1][v2] = adjList[v2][v1] = 1;
	}

	dfs(1);
	cout << cnt-1;
}
