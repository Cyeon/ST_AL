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



	//�ƴ� �����̸� ���� ¥ ��ģ ���� ��Ƴ� 
	//	��...
	//	����� �� ���� �ƴϴ� 
	//	��ųʸ��� ����ϳ� 


	if (isTenpai) {
		cout << "tenpai" << endl;

	}
	else
	{
		cout << "no tenpai" << endl;
	}
}