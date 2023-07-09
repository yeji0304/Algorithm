#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>


using namespace std;
int ans[100001];
bool visited[100001];
vector<int> graph[100001];

void dfs(int start) {
	visited[start] = true;

	for (int i = 0; i < graph[start].size(); i++) {
		int temp = graph[start][i];

		if (!visited[temp]) {
			ans[temp] = start;
			dfs(temp);
		}
	}
}

int main() {
	
	int n;
	cin >> n;

	for (int i = 1; i < n; i++) {
		
		int v1, v2;
		cin >> v1 >> v2;

		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	dfs(1);
	
	for (int i = 2; i <= n; i++) {
		cout << ans[i] << '\n';
	}
}
