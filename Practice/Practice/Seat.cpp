#include <iostream>
using namespace std;

int main()
{
	/*
		���尴���� ���� �¼��� ���� ����ϴ� ���α׷�(���ǹ�)
		- ���尴 �� / �¼� �� ��
		  1. ������ �������� ���
		  2. ������ �������� �ʴ� ���(1�� �� �ʿ�)
	*/

		int customer, column, row;
	
		cout << "���尴 �� �Է�: ";
		cin >> customer;
	
		cout << "�¼� �� �� �Է�: ";
		cin >> column;
	
		if (customer % column == 0)
		{
			row = customer / column;
			//cout << row << endl;
		}
		else
		{
			row = (int)(customer / column) + 1;
			//cout << row << endl;
		}
	
		cout << row << "���� ���� �ʿ��մϴ�." << endl;

	return 0;
}