// 2024-05-16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

#define cMAX 20
#define mMAX 1001
int coin[cMAX];
int money[cMAX][mMAX];
int cnt[cMAX];


int main()
{
    int n, nc, c;
    int i, j;

    scanf("%d%d", &n, &nc);
    for (i = 0; i < nc; i++)
        scanf("%d", &coin[i]);

    c = coin[0];
    for (i = c; i <= n; i++) {
        money[0][i] = money[0][i - c] + 1;
    }

    for (i = 1; i < nc; i++) {
        for (j = 1; j <= n; j++) {
            if (j >= coin[i]) {
                if (money[i][j - coin[i]] + 1 < money[i - 1][j])
                    money[i][j] = money[i][j - coin[i]] + 1;
                else {
                    money[i][j] = money[i - 1][j];
                }
            }
            else {
                money[i][j] = money[i - 1][j];
            }
        }
    }

    printf("    ");
    for (i = 1; i <= n; i++) {
        printf("%2d ", i);
    }

    printf("\n");
    for (i = 0; i < nc; i++) {
        printf("%2d: ", coin[i]);
        for (j = 1; j <= n; j++) {
            printf("%2d ", money[i][j]);
        }
        printf("\n");
    }

    for (i = nc - 1; i >= 0; i--) {
        while (n >= coin[i] && money[i][n] != money[i - 1][n]) {
            cnt[i]++;
            n -= coin[i];
        }
    }

    for (i = 0; i < nc; i++) {
        printf("%d : %d\n", coin[i], cnt[i]);
    }

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
