#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	map<string, int> clothesMap;
	vector<string> clothesKind;
	for (int i = 0; i < clothes.size(); i++)
	{
		clothesMap[clothes[i][1]]++;

		if (clothesMap[clothes[i][1]] == 1)
			clothesKind.push_back(clothes[i][1]);
	}

	for (int i = 0; i < clothesKind.size(); i++)
	{
		answer *= (clothesMap[clothesKind[i]] + 1);
	}
	
	//clothesMap.key_comp

	return answer - 1;
}

// ���� ������ Ȱ���Ͽ��� �ߴ� 
// �� ���� ����+1�� �� �������� �����ְ� �ű⿡ -1(�ƹ��͵� ���� ���� ����� ���� ���ִ� ��)�� ���ָ� �ȴ� 