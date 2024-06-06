#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (a[i] == c) {
			success = 1;
			return a[i];
		}
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
	return 0;
}