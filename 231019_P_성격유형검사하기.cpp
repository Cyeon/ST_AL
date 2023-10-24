#include <string>
#include <vector>
#include <map>
using namespace std;

string category = "RTCFJMAN";

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> scores;
     
    for (int i = 0; i < 8; i++) {
        scores.insert(make_pair(category[i], 0));
    }

    for (int i = 0; i < survey.size(); i++)
    {
        int score = choices[i] - 4;
        if (score == 0) {
            continue;
        }
        else if (score < 0) {
            scores[survey[i][0]] += -(score);
        }
        else {
            scores[survey[i][1]] += (score);
        }
    }

    for (int i = 0; i < 4; i++) {
        if (scores[category[i * 2]] < scores[category[(i * 2) + 1]]) {
            answer += category[(i * 2) + 1];
        }
        else
        {
            answer += category[(i * 2)];
        }
    }

    return answer;
}