#include<iostream>
using namespace std;

void even_number(int n);	// 짝수의 합 구하는 함수
void odd_number(int n);	// 홀수의 합 구하는 함수

/*int main() {
	int n;
	cout << "숫자를 입력하세요. (50 이하의 정수) >> ";
	cin >> n;
	while (true)
	{
		if (n <= 50)
			break;
		else
		{
			cout << "숫자를 다시 입력하세요. (50 이하의 정수) >> ";
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
	cout << "1부터 " << n << "까지 짝수의 합은" << sum << "입니다." << endl;
}

void odd_number(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1)
			sum += i;
	}
	cout << "1부터 " << n << "까지 홀수의 합은" << sum << "입니다." << endl;
}