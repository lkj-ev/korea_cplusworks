#include <iostream>
using namespace std;

int main()
{
	//������ �迭 ���� 
	int number[] = { 11, 55, 78, 46, 23 };

	//�ִ밪 ���ϱ�
	int max = number[0]; //11

	for (int i = 1; i < size(number); i++)
	{
		if (number[i] > max)
		{
			max = number[i];
		}
	}

	cout << "�ִ밪: " << max << endl;

	//�ּҰ� ����ϱ�
	int min = number[0]; //11

	for (int i = 1; i < size(number); i++)
	{
		if (number[i] < min)
		{
			min = number[i];
		}
	}

	cout << "�ּҰ�: " << min << endl;

	return 0;
}
