#include <string>
#include <vector>
#include <queue>
#include <map>
using namespace std;

queue<int> people1({ 1,2,3,4,5 });
queue<int> people2({ 2,1,2,3,2,4,2,5 });
queue<int> people3({ 3,3,1,1,2,2,4,4,5,5 });

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	map<int, int> correct;
	vector<queue<int>> peoples;
	
	peoples.push_back(people1);
	peoples.push_back(people2);
	peoples.push_back(people3);

	int maxCor = 0;

	for (int i = 0; i < answers.size(); i++)
	{
		for (int j = 0; j < peoples.size(); j++)
		{
			int answ = peoples[j].front();
			peoples[j].pop();

			if (answ == answers[i])
				correct[j]++;
			
			peoples[j].push(answ);
		}
	}

	for (int i = 0; i < peoples.size(); i++)
	{
		if (correct[i] > maxCor) {
			answer.clear();
			maxCor = correct[i];
			answer.push_back(i + 1);
		}
		else if (correct[i] == maxCor) {
			answer.push_back(i + 1);
		}
	}

	return answer;
}