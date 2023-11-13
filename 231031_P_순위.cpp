#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> results) {
	int answer = 0;
	bool wins[101][101];

	for (int i = 0; i < results.size(); i++)
	{
		wins[results[i][0]][results[i][1]] = true;
	}

	for

	return answer;
}