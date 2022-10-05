#include<iostream>
using namespace std;
int arr[19][19] ;

int temp[4]; //0 ¿ì, 1 ÇÏ, 2 ¿ì»ó, 3 ¿ìÇÏ 
void Dfs(int y, int x, int color, int dir) {
	if (arr[y][x] == 0 || color != arr[y][x]) { return; }

	if (x + 1 <= 19 && (dir == 0 || dir == -1)) {
		if (dir == -1 && arr[y][x - 1] == arr[y][x]) {}
		else {
			temp[0]++;
			Dfs(y, x + 1, color, 0);
		}
	}
	if ((y - 1 >= 0 && x + 1 <= 19) && (dir == 2 || dir == -1))
	{
		if (dir == -1 && arr[y + 1][x - 1] == arr[y][x]) {}
		else {
			temp[2]++;
			Dfs(y - 1, x + 1, color, 2);
		}
	}
	if (y + 1 <= 19)
	{
		if (dir == 1 || dir == -1) {
			if (dir == -1 && arr[y - 1][x] == arr[y][x]) {}
			else {
				temp[1]++;
				Dfs(y + 1, x, color, 1);
			}
		}

		if (x + 1 <= 19 && (dir == 3 || dir == -1))
		{
			if (dir == -1 && arr[y - 1][x - 1] == arr[y][x]) {}
			else {
				temp[3]++;
				Dfs(y + 1, x + 1, color, 3);
			}
		}
	}
	return;
}

int main() {
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			if (arr[i][j] == 0) { continue; }
			Dfs(i, j, arr[i][j], -1);
			for (int k = 0; k < 4; k++)
			{
				if (temp[k] == 5) {
					cout << arr[i][j] << endl;
					if (k == 2) {
						cout << i + 1 - 4 << " " << j + 1 + 4 << endl;
					}
					else {
						cout << i + 1 << " " << j + 1 << endl;
					}
					return 0;
				}
				temp[k] = 0;
			}
		}
	}
	cout << 0;
}