#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isTenpai = false;
vector<string> vec;
map<string, int> _map;
map<string, int> ::iterator iter;

int main() {

	string str;
	for (int i = 0; i < 13; i++)
	{
		cin >> str;
		//iter = _map.find(str);
		////iter.operator++;
	}



	//아니 텐파이를 어케 짜 미친 존나 어렵네 
	//	하...
	//	사람이 할 짓이 아니다 
	//	딕셔너리를 써야하나 


	if (isTenpai) {
		cout << "tenpai" << endl;

	}
	else
	{
		cout << "no tenpai" << endl;
	}
}