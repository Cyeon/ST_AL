#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    map<int, int> pokemons; // key - ����, value - �� 
    int n = nums.size() / 2;

    for (int i = 0; i < nums.size(); i++)
    {
        pokemons[nums[i]]++;
    }

    if (pokemons.size() >= n)
        answer = n;
    else
        answer = pokemons.size();

    return answer;
}

// Set���� Ǯ������ �� �������� 