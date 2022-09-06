#pragma region clock 함수를 통한 실행 시간 체크 
/*
#include <iostream>
#include <ctime> // C 헤더파일 <time.h>을 포함하는 것과 동일 
using namespace std;

int main() {
	clock_t start, finish;
	double duration;
	start = clock();
	int a = 0;

	// 실행 시간을 측정하고자 하는 코드 ↓
	for (int i = 0; i < 1000000; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			a += 1;
		}
	}
	// 실행 시간을 측정하고자 하는 코드 ↑

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "초입니다";
}

*/
#pragma endregion