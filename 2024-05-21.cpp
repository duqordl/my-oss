#include<iostream>
using namespace std;

class Board {
	static string* notices;
	static int index;
public:
	static void add(string str) {
		notices[index] = str;
		index++;
	}
	static void print() {
		cout << "**********게시판입니다. **********" << endl;
		for (int i = 0; i < index; i++) {
			cout << i << ":" << Board::notices[i] << endl;
		}
	}
};

string* Board::notices = new string[100];
int Board::index = 0;

int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요");
	Board::print();
	Board::add("리포트 대마왕 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
	Board::add("매일 매일 코딩 공부는 꾸준히 해야 합니다.");
	Board::print();
}