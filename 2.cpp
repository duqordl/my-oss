#include<iostream>
using namespace std;

void sum_average(int n, int count);

/*int main() {
	int n = 0, count = 0;

	sum_average(n, count);
	
	return 0;
}*/

void sum_average(int n, int count) {
	int sum = 0;
	float average = 0;

	while (true)	
	{// 100�� �Ѵ� ����(100 �̻�) �հ� ��տ� ���� �� ��
		if (n >= 100)
			break;
		else
		{
			cout << "���ڸ� �Է��ϼ��� >> ";
			cin >> n;
			if (n < 100) {
				sum += n;
				count += 1;
			}
		}
	}	
	average = float(sum) / count;	// ����� �Ҽ������� ��Ÿ���� ���� float(sum)�� ���

	cout << "�Է¹��� ���ڵ��� ����" << sum << " ����� " << average << "�Դϴ�." << endl;
}


