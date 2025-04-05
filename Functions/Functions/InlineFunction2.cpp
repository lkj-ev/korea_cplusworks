//#include <iostream>
//using namespace std;
//
////inline함수 - 오버헤드(시간이 지연된)를 막아줌
//inline int odd(int x) {return x % 2;}
///*int odd(int x) {
//	return x % 2;  //x % 2 == 1이 return 됨
//}*/
//
//int main()
//{
//	//1부터 10까지의 홀수의 합계
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		if (odd(i)) {  //i % 2 == 1(true)
//			sum += i;
//		}
//	}
//	//1, 3, 5, 7, 9
//	cout << "합계: " << sum << endl;
//
//	return 0;
//}