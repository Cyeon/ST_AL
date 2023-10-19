#include <string>
#include <vector>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
	long long answer = -1;
	answer += 1;
	while (!deliveries.empty() || pickups.size() != 0)
	{
		while (!deliveries.empty() && deliveries.back() == 0)
			deliveries.pop_back();
		while (!pickups.empty() && pickups.back() == 0)
			pickups.pop_back();

		int dis = max(deliveries.size(), pickups.size()) * 2;

		int del = cap;

		while (del > 0 && !deliveries.empty()) {
			if (del >= deliveries.back()) {
				del -= deliveries.back();
				deliveries.pop_back();
			}
			else
			{
				deliveries.back() -= del;
				break;
			}
		}

		int pic = 0;

		while (pic < cap && !pickups.empty())
		{
			if ((cap - pic) > pickups.back()) {
				pic += pickups.back();
				pickups.pop_back();
			}
			else
			{
				pickups.back() -= (cap - pic);
				break;
			}
		}
		answer += dis;
	}

	return answer;
}