////#include <string>
////#include <vector>
////#include <queue>
////#include <iostream>
////using namespace std;
////
////int solution(vector<vector<int>> quest) {
////	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
////	int answer = 0;
////	int curExp = 0;
////
////
////	for (int i = 0; i < quest.size(); i++)
////	{
////		que.push(make_pair(quest[i][0], quest[i][1]));
////	}
////
////	pair<int, int> curQuest;
////	while (!que.empty())
////	{
////		curQuest = que.top();
////		if (curQuest.first <= curExp) {
////			curExp += curQuest.second;
////			answer++;
////			que.pop();
////		}
////		else
////			break;
////	}
////
////	return answer;
////}
//
////#include <string>
////#include <vector>
////#include <iostream>
////
////using namespace std;
////
////int ground[11][11];
////int answer = 0;
////
////
////void checkGround(int startY, int startX, int farmSize) {
////	int rock = 0;
////	for (int i = startY; i < startY + farmSize; i++)
////	{
////		for (int j = startX; j < startX + farmSize; j++)
////		{
////			if (ground[i][j] == 0) continue;
////			if (ground[i][j] == 1) rock++;
////			else if (ground[i][j] == 2) return;
////		}
////	}
////
////	if (rock < answer) {
////		answer = rock;
////	}
////}
////
////int solution(vector<vector<int>> field, int farmSize) {
////
////	answer = 99999;
////
////	for (int i = 0; i < field.size(); i++)
////	{
////		for (int j = 0; j < field[i].size(); j++)
////		{
////			ground[i][j] = field[i][j];
////		}
////	}
////
////
////	for (int i = 0; i < field.size(); i++)
////	{
////		if (i + farmSize > field.size())
////			continue;
////
////		for (int j = 0; j < field[i].size(); j++)
////		{
////			if (j + farmSize > field[i].size())
////				continue;
////
////			checkGround(i, j, farmSize);
////		}
////	}
////
////	if (answer == 99999)
////		return -1;
////
////	return answer;
////}
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//constexpr double BallDiameter = 2;
//constexpr double BallHalfDiameter = 1;
//
//int solution(vector<vector<double>> objectBallPosList, vector<double> hitVector) {
//    int answer = -1;
//    return answer;
//}