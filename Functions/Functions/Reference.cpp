#include <iostream>
using namespace std;

/*
  ���� ������(&) - ������ �޸� ������ ����(alias)��
      ���̴� ������� �� ���� ������ ���� ���� �̸��� 
	  ���̴� ��������
*/
void swapVal(int a, int b) {
	int temp; //�ӽ� ����
	temp = a;
	a = b;
	b = temp;
}

void swapRef(int& a, int& b) { //���� ������
	int temp; //�ӽ� ����
	temp = a;
	a = b;
	b = temp;
}

void swapRef2(int* a, int* b) {
	int temp; //�ӽ� ����
	temp = *a;  //������(*)�� ����
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 10, y = 20;
	cout << "���� ���� ȣ��\n";
	swapVal(x, y);
	cout << "x=" << x << ", y=" << y << endl;

	cout << "������ ���� ȣ��\n";
	swapRef(x, y);
	cout << "x=" << x << ", y=" << y << endl;

	cout << "�����Ϳ� ���� ȣ��\n";
	swapRef2(&x, &y);  //�ּ� ������
	cout << "x=" << x << ", y=" << y << endl;

	/*int n = 1;
	int& x = n;  //n�� x�� ������
	int& y = n;  //n�� y�� ������

	cout << n << endl;
	cout << x << endl;
	cout << y << endl;*/

	return 0;
}