#include<iostream>
using namespace std;

int Array(int arr[], int size);

/*int main() {
	int arr[100], count = 0;
	arr, count = Array(arr, 100);

	for (int i = count; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}*/

int Array(int arr[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		cout << "�迭�� �Է��ϼ���(�Է��� �ߴ��ϰ� ������ 0�� �Է�) >> ";
		cin >> arr[i];
		if (arr[i] == 0) 
			break;
		else 
			count += 1;
	}
	return arr[count - 1], count - 1;
}