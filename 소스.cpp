#include <string>
#include <vector>
#include <cmath>
using namespace std;

constexpr double BallDiameter = 2;
constexpr double BallHalfDiameter = 1;
double len(double x, double y) {
	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;
	return  sqrt(x * x + y * y);;
}

vector<double> normalize(double x, double y) {
	vector<double> returnVec;
	double l = len(x, y);

	if (l != 0) {
		returnVec.push_back(x / l);
		returnVec.push_back(y / l);
	}

	return returnVec;
}

int solution(vector<vector<double>> objectBallPosList, vector<double> hitVector) {
	int answer = -1;
	bool repeat = true;
	bool done = false;
	vector<int> idxVec;

	hitVector = normalize(hitVector[0], hitVector[1]);

	while (repeat && !done)
	{
		for (int i = 0; i < objectBallPosList.size(); i++)
		{
			if (objectBallPosList[i][0] < -1 || objectBallPosList[i][1] < -1) {
				repeat = false;
				continue;
			}

			objectBallPosList[i][0] -= hitVector[0];
			objectBallPosList[i][1] -= hitVector[1];

			double curLen = len(objectBallPosList[i][0], objectBallPosList[i][1]);
			if (curLen < BallDiameter)
			{
				idxVec.push_back(i);
				done = true;
			}
			repeat = true;
		}

	}

	for (int i = 0; i < idxVec.size(); i++)
	{
		if (i == 0) {
			answer = idxVec[i];
			continue;
		}

		double ansLen = len(objectBallPosList[answer][0], objectBallPosList[answer][1]);
		double curLen = len(objectBallPosList[idxVec[i]][0], objectBallPosList[idxVec[i]][1]);

		if (curLen < ansLen)
			answer = idxVec[i];
	}

	return answer;
}

// 100 100 26