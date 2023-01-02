#include <iostream>
#include <string>
#include <regex>
#define endl "\n"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str;
	cin >> str;

	if (str.find("XXXX") != string::npos) {
		str = regex_replace(str, regex("XXXX"), "AAAA");
	}

	if (str.find("XX") != string::npos) {
		str = regex_replace(str, regex("XX"), "BB");
	}

	if (str.find("X")!= string::npos) {
		cout << -1;
		return 0;
	}

	cout << str;
}