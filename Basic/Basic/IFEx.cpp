#include <iostream>
using namespace std;

int main()
{
	//���̰� 15�� �̻��̸� "������" ����
	int age;
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;

	//�ܵ� if��
	//if (age >= 15)  //true - 1
	//{
	//	cout << "�������Դϴ�.\n";
	//}
	
	//���̰� 15�� �̻��̸� "������", �׷��� ������ "�����Ұ�" ����
	//if ~ else ��
	if (age >= 15)
	{
		cout << "�������Դϴ�.\n";
	}
	else //else if(age < 15)
	{
		cout << "�����Ұ��Դϴ�.\n";
	}

	cout << "���̴� " << age << "�� �Դϴ�.\n";

	return 0;


}