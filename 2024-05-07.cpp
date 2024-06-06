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
	cout << "숫자 a와 b를 입력하세요 >> ";
	cin >> a >> b;
	int big;
	if (bigger(a, b, big))
		cout << "a와 b의 값이 같습니다." << endl;
	else
		cout << "큰 수는 " << big << "입니다." << endl;

	return 0;
}