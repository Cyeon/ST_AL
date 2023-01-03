#include <iostream>
#include <map>
using namespace std;
#define endl "\n"

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, string> map1;
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;
		map1[str1] = str2;
	}
	
	for (int i = 0; i < m; i++)
	{
		string str;
		cin >> str;
		cout << map1[str] << endl;
	}
}