//#include <iostream>
//#include <cstdlib>  //srand(), rand() ���
//#include <ctime>    //time() ���
//using namespace std;
//
///*
//    random�� ����
//	1. srand(�õ尪) ȣ��
//	2. rand() ȣ��
//*/
//int main()
//{
//	//srand(20);
//	srand(time(NULL));  //�õ尪�� ��� �ٲ�
//
//	int rndVal = rand();
//	cout << rndVal << endl;
//
//	//���� ������
//	int coin = rand() % 2; //�������� 0, 1
//	cout << coin << endl;
//
//	//�ո� - 0, �޸� - 1
//	if (coin % 2 == 0)
//	{
//		cout << "�ո�\n";
//	}
//	else
//	{
//		cout << "�޸�\n";
//	}
//
//	//�ֻ��� ������
//	int dice = rand() % 6 + 1;  //0~5���. 1�� ������
//	cout << "�ֻ��� ��: " << dice;
//	cout << "\n==========================\n";
//
//	//�ֻ��� 10�� ������
//	for (int i = 1; i <= 10; i++)
//	{
//		int dice = rand() % 6 + 1;
//		cout << dice << endl;
//	}
//	cout << "==========================\n";
//
//	//������ �迭�� ��� ����
//	string carts[] = { "��", "�ᳪ��", "Ŀ��", "���" };
//
//	//�迭 ����� ���� - size()
//	cout << "����� ����: " << size(carts) << endl;
//
//	int idx = rand() % size(carts);  //0~3 ���� ���
//	cout << idx << endl;
//	cout << "ǰ��: " << carts[idx] << endl;
//	 
//	return 0;
//}