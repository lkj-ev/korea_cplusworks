//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//������ �迭 ����� �ʱ�ȭ
//	int a[4] = { 10, 20, 30, 40 };
//
//	cout << a[0] << endl;
//	cout << &a[0] << endl;
//	cout << a << endl; //�迭 �̸��� ���� �ּ��̴�.
//
//	//������ ������ �迭
//	int* pa;
//	pa = a; //&a[0]
//
//	cout << pa << endl;
//	cout << *pa << endl; //10, *(pa + 0) -> 0�� �ּҿ� �ִ� ��
//	cout << *(pa + 1)<< endl; //20, *(pa + 1) -> 1�� �ּҿ� �ִ� ��
//	cout << "==============\n";
//
//	//��ü ��� - ������ �������� �迭 ���� �˻�(��ȸ)��
//	for (int i = 0; i < size(a); i++)
//	{
//		cout << *(pa + i) << endl;
//	}
//	 
//	return 0;
//}