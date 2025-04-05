//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//   접근 제어자
//   - public: 외부에서 접근 가능
//   - private: 외부에서 접근 불가(같은 클래스 내부에서 접근 가능)
//   - private에 접근하기 위한 멤버 함수 생성 - set+변수(), get+변수()
//*/
//class Book {
//private:
//	int number;    //책 번호
//	string title;  //책 제목
//	string author; //저자
//
//public:
//	//생성자 오버로딩(중복) - 이름은 같고, 매개변수가 다르다.
//	Book() {
//		cout << "객체를 생성합니다\n" << endl;
//	}  //기본 생성자 - 생략 가능
//
//	//소멸자
//	~Book() {
//		cout << "객체가 소멸합니다\n" << endl;
//	}
//	//매개변수가 있는 생성자
//	Book(int number, string title, string author) {
//		this->number = number;
//		this->title = title;
//		this->author = author;
//	}
//
//	//책 번호 가져오는 함수
//	int getNumber() {
//		return number;
//	}
//	//책 제목 가져오기
//	string getTitle() {
//		return title;
//	}
//	//저자 가져오기
//	string getAuthor() {
//		return author;
//	}
//};
//
//int main()
//{
//	/*Book book1(100, "채식주의자", "한강");
//
//	cout << "책 번호: " << book1.getNumber() << endl;
//	cout << "책 제목: " << book1.getTitle() << endl;
//	cout << "책 제목: " << book1.getAuthor() << endl;*/
//
//	Book b1; //기본 생성자로 b1 객체 생성
//
//	//책 3권 생성
//	Book book[3] = {
//		Book(100, "채식주의자", "한강"),
//		Book(101, "C++ 완전정복", "조규남"),
//		Book(102, "모두의 C언어", "이형우")
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cout << "책 번호: " << book[i].getNumber() << endl;
//		cout << "책 제목: " << book[i].getTitle() << endl;
//		cout << "책 제목: " << book[i].getAuthor() << endl;
//		cout << "===============================\n";
//	}
//
//	return 0;
//}