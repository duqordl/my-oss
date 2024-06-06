#include<iostream>
using namespace std;

void sum_average(int n, int count);

/*int main() {
	int n = 0, count = 0;

	sum_average(n, count);
	
	return 0;
}*/

void sum_average(int n, int count) {
	int sum = 0;
	float average = 0;

	while (true)	
	{// 100을 넘는 숫자(100 이상) 합과 평균에 포함 안 함
		if (n >= 100)
			break;
		else
		{
			cout << "숫자를 입력하세요 >> ";
			cin >> n;
			if (n < 100) {
				sum += n;
				count += 1;
			}
		}
	}	
	average = float(sum) / count;	// 평균을 소수점까지 나타내기 위해 float(sum)을 사용

	cout << "입력받은 숫자들의 합은" << sum << " 평균은 " << average << "입니다." << endl;
}


