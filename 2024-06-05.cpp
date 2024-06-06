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

	cout << "3���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
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
	cout << "���� ������ ū ���ڴ� " << pizza[index].getName() << "�Դϴ�" << endl;
}