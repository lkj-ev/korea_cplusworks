//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//�� ���� - �����(1/0)
//	int a = 99;
//	int b = 9;
//
//	cout << "(a == b):" << (a == b) << endl;  //0
//	cout << "(a != b):" << (a != b) << endl;  //1
//	cout << "(a >= b):" << (a >= b) << endl;  //1
//	cout << "(a <= b):" << (a <= b) << endl;  //0
//
//	//�� ���� - (&&, ||, !)
//	//&& - �� �����̻󿡼� ��� ���϶��� ��
//	//|| = �� ������ �ϳ��� ���̵� ��
//	//! = �� ������ ���̸� �����̰�, �����̸� ��
//	cout << "(a == b) && (a > b):" << ((a == b) && (a > b)) << endl; //0
//	cout << "(a == b) || (a > b):" << ((a == b) || (a > b)) << endl; //1
//	cout << "!(a > b):" << !(a > b) << endl; //0
//
//	//���� ���� (���ǽ� ? "��" : "����")
//	int fatherAge = 47;
//	int motherAge = 50;
//	char result1;
//	string result2;
//
//	result1 = (fatherAge > motherAge) ? 'T' : 'F';
//	result2 = (fatherAge > motherAge) ? "��" : "����";
//
//	cout << "���1: " << result1 << endl;
//	cout << "���2: " << result2 << endl;
//
//	return 0;
//}