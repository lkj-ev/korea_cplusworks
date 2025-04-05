#include <iostream>
#include <string>

using namespace std;

/*
  클래스(객체)간 협력
  사람과 버스, 택시와의 관계 구현
*/
class Bus {
private:
	int busNumber;   //버스 번호
	int passenger;   //승객수
	int money;       //수입

public:
	//생성자 : 초기화 목록
	Bus(int busNumber) : passenger(0), money(0) {
		this->busNumber = busNumber;
	}

	//승객을 태우다
	void take(int money) {
		this->money += money; //수입 누적
		passenger++;  //승객수 증가
	}

	//버스의 정보
	void busInfo() {
		cout << busNumber << "번 버스의 수입은 " << money <<
			"원이고, 승객수는 " << passenger << "명 입니다.\n";
	}
};

class Person {
private:
	string name;  //이름
	int money;    //가진 돈

public:
	//생성자 : 초기화 목록
	Person(string name, int money) : name(name), money(money) {}

	//교통 수단을 탄다
	void takeBus(Bus& bus, int fee) { //매개변수로 버스 객체 전달
		bus.take(fee);   //버스를 탄다
		this->money -= fee; //요금은 낸다
	}

	//승객의 정보
	void personInfo() {
		cout << name << "님의 남은 돈은 " << money << "원 입니다.\n";
	}
};


int main()
{
	Person p1("신유빈", 10000); //승객 객체 1명 생성
	Person p2("이정후", 20000);
	Bus bus103(103);  //103번 버스 생성
	int feeOfBus = 1500; //버스 요금

	p1.takeBus(bus103, feeOfBus);
	p2.takeBus(bus103, feeOfBus);

	//승객, 버스의 정보 출력
	p1.personInfo();
	p2.personInfo();
	bus103.busInfo();

	return 0;
}