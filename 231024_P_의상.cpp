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

// 수학 공식을 활용하여야 했다 
// 각 옷의 갯수+1을 옷 종류별로 곱해주고 거기에 -1(아무것도 입지 않은 경우의 수를 뺴주는 것)을 해주면 된다 