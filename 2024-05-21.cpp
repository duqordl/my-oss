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
		cout << "**********�Խ����Դϴ�. **********" << endl;
		for (int i = 0; i < index; i++) {
			cout << i << ":" << Board::notices[i] << endl;
		}
	}
};

string* Board::notices = new string[100];
int Board::index = 0;

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���");
	Board::print();
	Board::add("����Ʈ �븶�� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
	Board::add("���� ���� �ڵ� ���δ� ������ �ؾ� �մϴ�.");
	Board::print();
}