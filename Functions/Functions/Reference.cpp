#include <iostream>
using namespace std;

/*
  참조 연산자(&) - 기존의 메모리 공간에 별명(alias)을
      붙이는 방법으로 한 개의 변수에 여러 개의 이름을 
	  붙이는 연산자임
*/
void swapVal(int a, int b) {
	int temp; //임시 변수
	temp = a;
	a = b;
	b = temp;
}

void swapRef(int& a, int& b) { //참조 연산자
	int temp; //임시 변수
	temp = a;
	a = b;
	b = temp;
}

void swapRef2(int* a, int* b) {
	int temp; //임시 변수
	temp = *a;  //역참조(*)을 붙임
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 10, y = 20;
	cout << "값에 의한 호출\n";
	swapVal(x, y);
	cout << "x=" << x << ", y=" << y << endl;

	cout << "참조에 의한 호출\n";
	swapRef(x, y);
	cout << "x=" << x << ", y=" << y << endl;

	cout << "포인터에 의한 호출\n";
	swapRef2(&x, &y);  //주소 연산자
	cout << "x=" << x << ", y=" << y << endl;

	/*int n = 1;
	int& x = n;  //n을 x에 복사함
	int& y = n;  //n을 y에 복사함

	cout << n << endl;
	cout << x << endl;
	cout << y << endl;*/

	return 0;
}