#include <iostream>
#include <string>

using namespace std;

/*
  Ŭ����(��ü)�� ����
  ����� ����, �ýÿ��� ���� ����
*/
class Bus {
private:
	int busNumber;   //���� ��ȣ
	int passenger;   //�°���
	int money;       //����

public:
	//������ : �ʱ�ȭ ���
	Bus(int busNumber) : passenger(0), money(0) {
		this->busNumber = busNumber;
	}

	//�°��� �¿��
	void take(int money) {
		this->money += money; //���� ����
		passenger++;  //�°��� ����
	}

	//������ ����
	void busInfo() {
		cout << busNumber << "�� ������ ������ " << money <<
			"���̰�, �°����� " << passenger << "�� �Դϴ�.\n";
	}
};

class Person {
private:
	string name;  //�̸�
	int money;    //���� ��

public:
	//������ : �ʱ�ȭ ���
	Person(string name, int money) : name(name), money(money) {}

	//���� ������ ź��
	void takeBus(Bus& bus, int fee) { //�Ű������� ���� ��ü ����
		bus.take(fee);   //������ ź��
		this->money -= fee; //����� ����
	}

	//�°��� ����
	void personInfo() {
		cout << name << "���� ���� ���� " << money << "�� �Դϴ�.\n";
	}
};


int main()
{
	Person p1("������", 10000); //�°� ��ü 1�� ����
	Person p2("������", 20000);
	Bus bus103(103);  //103�� ���� ����
	int feeOfBus = 1500; //���� ���

	p1.takeBus(bus103, feeOfBus);
	p2.takeBus(bus103, feeOfBus);

	//�°�, ������ ���� ���
	p1.personInfo();
	p2.personInfo();
	bus103.busInfo();

	return 0;
}