#include <iostream>
using namespace std;
/*
	배열 길이가 5인 정수 배열을 선언하고, 1~10중 홀수만을 배열에 저장한
    후 그 합과 평균을 계산하시오. [평균은 실수형 자료형을 사용함]
*/
int main()
{
	int arr[5] = { 1, 3, 5, 7, 9 };
	int total = 0;  //합계 변수
	double avg;
	
	//합계
	for (int i = 0; i < size(arr); i++)
	{
		total += arr[i];
	}
	
	//평균 = 합계 / 개수
	avg = (double)total / size(arr);
	
	cout << "총합: " << total << endl;
	cout << "평균: " << avg << endl;
	
	return 0;
}
