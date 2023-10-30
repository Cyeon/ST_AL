#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> num;
int goal;
int answer;

void dfs(int past, int idx)
{
	if (idx == num.size() - 1) 
	{
		if (past + num[idx] == goal)
			answer++;
		if (past - num[idx] == goal)
			answer++;
	}
	else
	{
		dfs(past + num[idx], idx + 1);
		dfs(past - num[idx], idx + 1);
	}
}

int solution(vector<int> numbers, int target) {
	answer = 0;
	num = numbers;
	goal = target;

	dfs(num[0],	1);
	dfs(-num[0], 1);

	return answer;
}