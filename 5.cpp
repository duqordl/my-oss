#include<iostream>
using namespace std;

float Circle(int r);

/*int main() {

	int r;
	float circle = 0;
	cout << "반지름을 입력하세요 >> ";
	cin >> r;

	circle = Circle(r);

	cout << "반지름 길이가 " << r << "인 원의 넓이는 " << circle << "입니다." << endl;

	return 0;
}*/

float Circle(int r) {
	float c;
	c = r * r * 3.14;

	return c;
}