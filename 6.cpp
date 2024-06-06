#include<iostream>
using namespace std;

int factorial(int n);

/*int main() {
	int n, f = 0;
	cout << "숫자를 입력하세요 >> ";
	cin >> n;

	f = factorial(n);

	cout << n << "!(" << n << "팩토리얼)의 값은 " << f << "입니다." << endl;

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