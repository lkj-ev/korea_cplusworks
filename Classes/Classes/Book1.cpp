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
//	Book(){}  //�⺻ ������ - ���� ����
//
//	//å ��ȣ �Է� �Լ�
//	void setNumber(int num) {
//		number = num;
//	};
//	//å ��ȣ �������� �Լ�
//	int getNumber() {
//		return number;
//	}
//	//å ���� �Է�
//	void setTitle(string tit) {
//		title = tit;
//	}
//	//å ���� ��������
//	string getTitle() {
//		return title;
//	}
//	//���� �Է�
//	void setAuthor(string aut) {
//		author = aut;
//	}
//	//���� ��������
//	string getAuthor() {
//		return author;
//	}
//};
//
//int main()
//{
//	Book book1;
//	//book1.number = 100;  //�⺻�� private �̹Ƿ� ���� �Ұ�
//	book1.setNumber(100);
//	book1.setTitle("ä��������");
//	book1.setAuthor("�Ѱ�");
//
//	cout << "å ��ȣ: " << book1.getNumber() << endl;
//	cout << "å ����: " << book1.getTitle() << endl;
//	cout << "å ����: " << book1.getAuthor() << endl;
//	
//	return 0;
//}