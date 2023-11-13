#include <string>
#include <vector>
#include <map>
#include<queue>
using namespace std;

class SongData {
public:
	int plays;
	int songNum;

	SongData(int p, int s) {
		plays = p;
		songNum = s;
	}

	bool operator <(SongData& songData) {
		if (plays == songData.plays)
			return songNum < songData.songNum;
		return plays > songData.plays;
	}

};
//
//SongData& bool operator <(SongData& songData) {
//	if (this->plays == songData.plays)
//		return this->songNum < songData.songNum;
//	return this->plays > songData.plays;
//};

class GenreData {
public:
	string name;
	int plays;

	GenreData(string s, int i) {
		name = s;
		plays = i;
	}

	bool operator<(GenreData& g) {
		return plays > g.plays;
	}
};


vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
vector<int> plays = { 500, 600, 150, 800, 2500 };

vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	map<string, int> allPlay; // 서로 다른 장르 중 가장 많은 총 재생수를 가리기 위한 맵 string/int
	priority_queue<GenreData> gDatas;
	vector<string> gNameVec;
	map<string, priority_queue<SongData>> songs;


	for (int i = 0; i < plays.size(); i++)
	{
		if (allPlay.find(genres[i]) == allPlay.end())
		{
			gNameVec.push_back(genres[i]);
		}

		allPlay[genres[i]] += plays[i];

		songs[genres[i]].push(SongData(plays[i], i));
	}

	for (int i = 0; i < gNameVec.size(); i++)
	{
		gDatas.push(GenreData(gNameVec[i], allPlay[gNameVec[i]]));
	}

	while (!gDatas.empty())
	{
		string g = gDatas.top().name;
		gDatas.pop();

		for (int i = 0; i < 2; i++)
		{
			if (!songs[g].empty())
			{
				answer.push_back(songs[g].top().songNum);
				songs[g].pop();
			}
		}
	}

	return answer;
}

int main() {
	solution(genres, plays);
}