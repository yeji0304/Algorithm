#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;
map<string, int> file;

int main(void) {
	
	int n; 
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		int temp = (int)s.find('.');
		file[s.substr(temp + 1)]++;
	}

	for (auto it = file.begin(); it != file.end(); it++) {
		cout << (*it).first << " " << (*it).second << "\n";
	}
}