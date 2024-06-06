#include<iostream>
using namespace std;

void swapArray(int* p, int* q, int size);
void printArray(int* p, int size);

/*int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 9,8,7,6,5 };

	cout << "배열 a = ";
	printArray(a, 5);
	cout << "배열 b = ";
	printArray(b, 5);
	cout << endl;

	swapArray(a, b, 5);

	cout << "swapArray() 실행..." << endl;
	cout << "배열 a = ";
	printArray(a, 5);
	cout << "배열 b = ";
	printArray(b, 5);


	return 0;
}*/

/*void swapArray(int* p, int* q, int size) {
	int c[5];
	for (int i = 0; i < size; i++) {
		c[i] = *(p + i);
	}
	for (int i = 0; i < size; i++) {
		*(p + i) = *(q + i);
	}
	for (int i = 0; i < size; i++) {
		*(q + i) = c[i];
	}
}

void printArray(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl;
}*/

void swapArray(int* p, int* q, int size) {
	int tmp;
	for (int i = 0; i < size; i++) {
		tmp = p[i];
		p[i] = q[i];
		q[i] = tmp;
	}
}

void printArray(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}