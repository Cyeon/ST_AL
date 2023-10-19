#include<iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


enum dateType {
	YEAR,
	MONTH,
	DAY
};

int getIntDate(dateType type, string date) {
	int num = 0;

	switch (type)
	{
	case YEAR:
		num = stoi(date.substr(0, 4));
		break;
	case MONTH:
		num = stoi(date.substr(5, 2));
		break;
	case DAY:
		num = stoi(date.substr(8, 2));
		break;
	default:
		break;
	}

	return num;
}

string getStringDate(int date) {
	string str = "";

	str = to_string(date);

	if (str.size() < 2) {
		str.insert(0, "0");
	}

	return str;
}

bool IsEnd(string date, string today) {
	bool result = false;
	if (getIntDate(YEAR, today) > getIntDate(YEAR, date))
		return true;
	else if (getIntDate(YEAR, today) == getIntDate(YEAR, date) && getIntDate(MONTH, today) > getIntDate(MONTH, date))
		return true;
	else if (getIntDate(YEAR, today) == getIntDate(YEAR, date) && (getIntDate(MONTH, today) == getIntDate(MONTH, date) && getIntDate(DAY, today) > getIntDate(DAY, date)))
		return true;
	else
		return false;
}

string addDate(string date, int addMonth) {

	cout << date << "\t" << getIntDate(DAY, date) << endl;

	int month = getIntDate(MONTH, date) + addMonth;
	int day = getIntDate(DAY, date) - 1;
	int year = getIntDate(YEAR, date);

	//cout << getIntDate(DAY, date) << "\t" << day << endl;

	if (day <= 0) {
		day = 28;
		month -= 1;
	}

	while (month > 12)
	{
		month -= 12;
		year += 1;
	}

	string str = to_string(year) + "." + getStringDate(month) + "." + getStringDate(day);
	return str;
}


int main() {

	string today = "2022.05.19";
	vector <string> terms = { "A 6","B 12","C 3" };
	vector<string> privacies = { "2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C" };
	vector<int> answer;

	map<string, int> termMap;

	for (int i = 0; i < terms.size(); i++)
	{
		termMap.insert(make_pair(terms[i].substr(0, 1), stoi(terms[i].substr(2, terms[i].size() - 2))));
	}

	for (int i = 0; i < privacies.size(); i++)
	{
		string date = privacies[i].substr(0, 10);
		string type = privacies[i].substr(11);

		if (IsEnd(addDate(date, termMap[type]), today))
		{
			//cout << i << "\t" << termMap[type] << "\t" << addDate(date, termMap[type]) << endl;
			answer.push_back(i + 1);
		}
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << endl;
	}

	return 0;
}