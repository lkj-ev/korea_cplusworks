//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//   ���� ������
//   - public: �ܺο��� ���� ����
//   - private: �ܺο��� ���� �Ұ�(���� Ŭ���� ���ο��� ���� ����)
//   - private�� �����ϱ� ���� ��� �Լ� ���� - set+����(), get+����()
//*/
//class Book {
//private:
//	int number;    //å ��ȣ
//	string title;  //å ����
//	string author; //����
//
//public:
//	//������ �����ε�(�ߺ�) - �̸��� ����, �Ű������� �ٸ���.
//	Book() {
//		cout << "��ü�� �����մϴ�\n" << endl;
//	}  //�⺻ ������ - ���� ����
//
//	//�Ҹ���
//	~Book() {
//		cout << "��ü�� �Ҹ��մϴ�\n" << endl;
//	}
//	//�Ű������� �ִ� ������
//	Book(int number, string title, string author) {
//		this->number = number;
//		this->title = title;
//		this->author = author;
//	}
//
//	//å ��ȣ �������� �Լ�
//	int getNumber() {
//		return number;
//	}
//	//å ���� ��������
//	string getTitle() {
//		return title;
//	}
//	//���� ��������
//	string getAuthor() {
//		return author;
//	}
//};
//
//int main()
//{
//	/*Book book1(100, "ä��������", "�Ѱ�");
//
//	cout << "å ��ȣ: " << book1.getNumber() << endl;
//	cout << "å ����: " << book1.getTitle() << endl;
//	cout << "å ����: " << book1.getAuthor() << endl;*/
//
//	Book b1; //�⺻ �����ڷ� b1 ��ü ����
//
//	//å 3�� ����
//	Book book[3] = {
//		Book(100, "ä��������", "�Ѱ�"),
//		Book(101, "C++ ��������", "���Գ�"),
//		Book(102, "����� C���", "������")
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cout << "å ��ȣ: " << book[i].getNumber() << endl;
//		cout << "å ����: " << book[i].getTitle() << endl;
//		cout << "å ����: " << book[i].getAuthor() << endl;
//		cout << "===============================\n";
//	}
//
//	return 0;
//}