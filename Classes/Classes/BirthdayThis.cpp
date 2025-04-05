//#include <iostream>
//using namespace std;
//
//class BirthDay {
//private:
//	int year;  //연도
//	int month; //월
//	int day;   //일
//
//public:
//	BirthDay() {}; //기본 생성자 생략
//	~BirthDay() {};
//
//	void setYear(int year) {this->year = year;}
//	int getYear() { return year; }
//	void printThis();
//};
////선언부와 구현부 분리
//void BirthDay::printThis() {  //this 객체를 출력
//	cout << this << endl;
//}
//
//int main()
//{
//	BirthDay bDay;
//	//bDay.year = 2025; private이므로 접근 불가
//	bDay.setYear(2025);
//
//	cout << bDay.getYear() << endl;
//
//	cout << &bDay << endl;
//	bDay.printThis();
//
//	return 0;
//}