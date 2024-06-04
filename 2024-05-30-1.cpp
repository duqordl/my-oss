#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

#define MAX 20
#define max 1048576 // 2의 20승 1048576
int c[max] = { 0 };


int main()
{
    int n;
    int p[MAX];
    int result[MAX];

    printf("카드의 개수를 입력하세요(1<=N<=20) >> ");
    scanf("%d", &n);
    printf("카드의 숫자를 입력하세요(1<=P<=100) >> ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < n; i++) {
        int card = p[i];
        int index = 1;
        while (true) {
            if (c[index] == 0) {
                c[index] = card;
                result[i] = index;

                break;
            }
            else {
                if (card < c[index]) {
                    index = index * 2;
                }
                else {
                    index = index * 2 + 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}