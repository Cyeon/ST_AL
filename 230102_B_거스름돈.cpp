#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, answer = 0;
	cin >> n;

	if (n / 5 > 0) {
		if ((n % 5) % 2 == 0) {
			answer += (n / 5);
			n %= 5;
		}
		else
		{
			answer += ((n / 5) - 1);
			n %= 5;
			n += 5;
		}
	}

	if (n / 2 > 0) {
		answer += (n / 2);
		n %= 2;
	}

	if (n >= 1) {
		cout << -1;
		return 0;
	}
	cout << answer;
	return 0;
}