#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b)
		return 1;
	else
	{
		if (a > b)
			big = a;
		else
			big = b;
		return 0;
	}
}

int main() {
	int a, b;
	cout << "���� a�� b�� �Է��ϼ��� >> ";
	cin >> a >> b;
	int big;
	if (bigger(a, b, big))
		cout << "a�� b�� ���� �����ϴ�." << endl;
	else
		cout << "ū ���� " << big << "�Դϴ�." << endl;

	return 0;
}