#include<iostream>
using namespace std;

void gugudan(int a, int b);

/*int main() {
	int a, b, n = 0;
	cout << "���� �� ���� �Է��ϼ��� >> ";
	cin >> a >> b;

	if (a > b) {
		n = b;
		b = a;
		a = n;
	}

	gugudan(a, b);

	return 0;
}*/

void gugudan(int a, int b) {
	for (int i = a; i <= b; i++) {
		cout << i << "��" << endl;
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
}