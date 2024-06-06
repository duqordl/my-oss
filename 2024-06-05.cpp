#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	void setRN(int r, string n) { setRadius(r); name = n; }
	string getName() { return name; }
};

int main() {
	NamedCircle pizza[3];
	double size[3];
	string name[3];

	cout << "3개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ">> ";
		int r;
		cin >> r >> name[i];
		pizza[i].setRN(r, name[i]);
		size[i] = pizza[i].getArea();
	}

	int index = 0;
	for (int i = 1; i < 3; i++) {
		if (size[i] > size[index]) {
			index = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[index].getName() << "입니다" << endl;
}