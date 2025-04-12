#include <iostream>
//point 구조체 생성 - public(기본이 접근 가능)
using namespace std;
struct point {
	int x, y;

	//기본생성자
	point() {}
	
	//생성자 : 초기화 목록
	point(int x, int y) : x(x), y(y) {}
};

point inputPoint() {
	point p; //기본 생성자로 객체 생성
	cout << "좌표를 입력해주세요(x, y): ";
	cin >> p.x >> p.y;
	return p; //반환시 복사됨
}

//좌표를 출력하는 함수
//const 상수 키워드 - 수정할 수 없음
//문자열은 배열로 만들거나 포인터로 만듬
void printPoint(point&p, const char* str = "Input Point") {
	cout << str << "=(" << p.x << ", " << p.y << ")|n";
}


int main()
{
    //참조연산자 활용
	//int n = 1;
	//int& x = n; //참조변수 x 선언
	//int& y = n;

	//cout << "x = " << x + 1 << endl;
	//cout << "y = " << y + 1 << endl;

	point p1; //기본 생성자로 객체 생성
	point p2(2, 4);


	p1 = inputPoint();
	printPoint(p1, "입력 좌표");






	return 0;
}