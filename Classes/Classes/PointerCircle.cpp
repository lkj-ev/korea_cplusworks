//#include <iostream>
//#define M_PI 3.1415  //��ũ�� ���
//using namespace std;
//
///*
//  Ŭ����(��ü)�� ����
//*/
//class Point {
//private:
//	int x;
//	int y;
//
//public:
//	//������ : �ʱ�ȭ ���
//	//Point(int x, int y) : x(x), y(y) {}
//
//	//setter �Լ�
//	void setX(int x) { this->x = x;}
//	void setY(int y) { this->y = y;}
//
//	//getter �Լ�
//	int getX() { return x; }
//	int getY() { return y; }
//};
//
//class Circle {
//private:
//	Point center;  //�߽���(Point �ڷ��� ���)
//	int radius;    //������
//
//public:
//	//������ �ʱ�ȭ ��� ���
//	//Circle(int x, int y, int radius) : center(x, y), radius(radius) {}
//	
//	//this ��� �ʱ�ȭ
//	Circle(int x, int y, int radius) {
//		this->center.setX(x);
//		this->center.setY(y);
//		this->radius = radius;
//	}
//
//	//���� ����
//	void showInfo() {
//		cout << "���� �߽���(" << center.getX() << ", " << center.getY() <<
//			")�̰�, �������� " << radius << "�Դϴ�.\n";
//	}
//
//	//���� ���� = ������ x ������ x ������
//	double getArea() {
//		return M_PI * radius * radius;
//	}
//};
//
//
//int main()
//{
//	//�� ��ü ����
//	Circle c1(2, 3, 5);
//	c1.showInfo();
//
//	cout << "���� ����: " << c1.getArea() << endl;
//
//	return 0;
//}