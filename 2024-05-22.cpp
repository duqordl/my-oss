#include<iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << " " << price << "��" << pages << "������" << endl;
	}
	string getTitle() {
		return title;
	}
	bool operator==(int op2);
	bool operator==(string op3);
	bool operator==(Book op4);
};

bool Book::operator==(int op2) {
	if (price == op2) return true;
	else return false;
}

bool Book::operator==(string op3) {
	if (title == op3) return true;
	else return false;
}

bool Book::operator==(Book op4) {
	if (price == op4.price && title == op4.title && pages == op4.pages) return true;
	else return false;
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
}