#include <string>
#include <vector>
#include <map>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    map<string, int> phones;

    for (int i = 0; i < phone_book.size(); i++)
        phones[phone_book[i]]++;

    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = 0; j < phone_book.size(); j++)
        {
            if (phones[phone_book[j]] && phone_book[i] != phone_book[j])
                return false;
        }
    }

    return answer;
}