//#include <iostream>
//using namespace std;
//
//class BirthDay {
//private:
//	int year;  //����
//	int month; //��
//	int day;   //��
//
//public:
//	BirthDay() {}; //�⺻ ������ ����
//	~BirthDay() {};
//
//	void setYear(int year) {this->year = year;}
//	int getYear() { return year; }
//	void printThis();
//};
////����ο� ������ �и�
//void BirthDay::printThis() {  //this ��ü�� ���
//	cout << this << endl;
//}
//
//int main()
//{
//	BirthDay bDay;
//	//bDay.year = 2025; private�̹Ƿ� ���� �Ұ�
//	bDay.setYear(2025);
//
//	cout << bDay.getYear() << endl;
//
//	cout << &bDay << endl;
//	bDay.printThis();
//
//	return 0;
//}