#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

void reversee(stack<char>& st) {
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
}

int main(void) {

	string s;
	getline(cin, s);

	stack<char> st;
	bool isTag = false;

	for (char ch : s) {

		if (ch == '<') {
			reversee(st);
			isTag = true;
			cout << ch;
		}
		else if (ch == '>') {
			isTag = false;
			cout << ch;
		}
		else if (ch == ' ') {
			reversee(st);
			cout << ch;
		}
		else if (isTag) {
			cout << ch;
		}
		else {
			st.push(ch);
		}
	}

	reversee(st);
	
}