#include<iostream>
using namespace std;

int maxinmum(int a[], int size);
int mininmum(int a[], int size);

/*int main() {
	int max, min;
	int array[10] = { 9, 5, 11, 4, 1, 3, 7, 12, 2, 8 };

	max = maxinmum(array, 10);
	min = mininmum(array, 10);

	cout << "최대값은?: " << max << endl;
	cout << "최소값은?: " << min << endl;

	return 0;
}*/

int maxinmum(int a[], int size) {
	int max = a[0];
	for (int i = 0; i < size; i++) {
		if (max < a[i])
			max = a[i];
	}
	return max;
}

int mininmum(int a[], int size) {
	int min = a[0];
	for (int i = 0; i < size; i++) {
		if (min > a[i])
			min = a[i];
	}
	return min;
}