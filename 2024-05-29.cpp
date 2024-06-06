#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }
	friend Circle& operator++(Circle& op);
	friend Circle operator++(Circle& op, int x);
	friend Circle operator+(int op1, Circle op2);
};

Circle& operator++(Circle& op) {
	op.radius++;
	return op;
}

Circle operator++(Circle& op, int x) {
	Circle tmp = op;
	op.radius++;
	return tmp;
}

Circle operator+(int op1, Circle op2) {
	Circle tmp;
	tmp.radius = op1 + op2.radius;
	return tmp;

}

int main() {
	Circle a(5), b(4);
	++a; // 반지름을 1 증가 시킨다.
	b = a++; // 반지름을 1 증가 시킨다.
	a.show();
	b.show();

	Circle c(5), d(4);
	d = 1 + c; // d의 반지름을 c의 반지름에 1을 더한 것으로 변경
	c.show();
	d.show();

	return 0;
}