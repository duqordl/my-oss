#include<iostream>
using namespace std;

float Circle(int r);

/*int main() {

	int r;
	float circle = 0;
	cout << "�������� �Է��ϼ��� >> ";
	cin >> r;

	circle = Circle(r);

	cout << "������ ���̰� " << r << "�� ���� ���̴� " << circle << "�Դϴ�." << endl;

	return 0;
}*/

float Circle(int r) {
	float c;
	c = r * r * 3.14;

	return c;
}