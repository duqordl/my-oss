#include<iostream>
using namespace std;

void even_number(int n);	// ¦���� �� ���ϴ� �Լ�
void odd_number(int n);	// Ȧ���� �� ���ϴ� �Լ�

/*int main() {
	int n;
	cout << "���ڸ� �Է��ϼ���. (50 ������ ����) >> ";
	cin >> n;
	while (true)
	{
		if (n <= 50)
			break;
		else
		{
			cout << "���ڸ� �ٽ� �Է��ϼ���. (50 ������ ����) >> ";
			cin >> n;
		}		
	}

	even_number(n);
	odd_number(n);

	return 0;
}*/

void even_number(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	cout << "1���� " << n << "���� ¦���� ����" << sum << "�Դϴ�." << endl;
}

void odd_number(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1)
			sum += i;
	}
	cout << "1���� " << n << "���� Ȧ���� ����" << sum << "�Դϴ�." << endl;
}