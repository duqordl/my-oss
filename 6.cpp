#include<iostream>
using namespace std;

int factorial(int n);

/*int main() {
	int n, f = 0;
	cout << "���ڸ� �Է��ϼ��� >> ";
	cin >> n;

	f = factorial(n);

	cout << n << "!(" << n << "���丮��)�� ���� " << f << "�Դϴ�." << endl;

	return 0;
}*/

int factorial(int n) {
	if (n <= 1)
		return 1;
	else
	{
		return n * factorial(n - 1);
	}
}