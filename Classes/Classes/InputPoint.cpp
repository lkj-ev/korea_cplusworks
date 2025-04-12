#include <iostream>
//point ����ü ���� - public(�⺻�� ���� ����)
using namespace std;
struct point {
	int x, y;

	//�⺻������
	point() {}
	
	//������ : �ʱ�ȭ ���
	point(int x, int y) : x(x), y(y) {}
};

point inputPoint() {
	point p; //�⺻ �����ڷ� ��ü ����
	cout << "��ǥ�� �Է����ּ���(x, y): ";
	cin >> p.x >> p.y;
	return p; //��ȯ�� �����
}

//��ǥ�� ����ϴ� �Լ�
//const ��� Ű���� - ������ �� ����
//���ڿ��� �迭�� ����ų� �����ͷ� ����
void printPoint(point&p, const char* str = "Input Point") {
	cout << str << "=(" << p.x << ", " << p.y << ")|n";
}


int main()
{
    //���������� Ȱ��
	//int n = 1;
	//int& x = n; //�������� x ����
	//int& y = n;

	//cout << "x = " << x + 1 << endl;
	//cout << "y = " << y + 1 << endl;

	point p1; //�⺻ �����ڷ� ��ü ����
	point p2(2, 4);


	p1 = inputPoint();
	printPoint(p1, "�Է� ��ǥ");






	return 0;
}