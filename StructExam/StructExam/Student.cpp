#include <iostream>
#include <string>
using namespace std;

//����ü - �������� �ڷ����� �׷�ȭ ��
struct Student {
	string name;    //�̸�
	int grade;      //�г�
	string address; //�ּ� 
};

int main()
{
	//����ü ��� - ����ü ���� ����
	//��(.) �����ڷ� ����
	Student st = Student();
	st.name = "�̿���";
	st.grade = 3;
	st.address = "����� ����� ��赿";

	cout << "�л� �̸�: " << st.name << endl;
	cout << "�г�: " << st.grade << endl;
	cout << "�ּ�: " << st.address << endl;

	return 0;
}