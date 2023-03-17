#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(void) {

	string s;

	string A = "AAAA";
	string B = "BB";

	cin >> s ;

	s = regex_replace(s, regex("XXXX"), A);
	s = regex_replace(s, regex("XX"), B);

	if (s.find("X") != string::npos)
		cout << -1;
	else
		cout << s;
}