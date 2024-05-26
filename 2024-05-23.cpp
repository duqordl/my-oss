// 2024-05-23.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

#define MAX 30
char str1[MAX];
char str2[MAX];
int cnt[MAX][MAX];
void prt(int n, int i, int j);

void prt(int n, int i, int j) {
    if (n == 0 || i == -1 || j == -1)
        return;
    if (str1[i] == str2[j]) {
        prt(n - 1, i - 1, j - 1);
        printf("%c", str1[i]);
    }
    else {
        if (cnt[i - 1][j] > cnt[i][j - 1])
            prt(n, i - 1, j);
        else
            prt(n, i, j - 1);
    }
}

int main()
{
    int i, j;
    int len1, len2;

    printf("first string: ");
    scanf("%s", str1);
    printf("second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (str1[0] == str2[0])
        cnt[0][0] = 1;
    else
        cnt[0][0] = 0;

    for (j = 1; j < len2; j++) {
        if (str1[0] == str2[j])
            cnt[0][j] = 1;
        else
            cnt[0][j] = cnt[0][j - 1];
    }

    for (i = 1; i < len1; i++) {
        if (str1[i] == str2[0])
            cnt[i][0] = 1;
        else
            cnt[i][0] = cnt[i - 1][0];
    }

    for (i = 1; i < len1; i++) {
        for (j = 1; j < len2; j++) {
            if (str1[i] == str2[j])
                cnt[i][j] = cnt[i - 1][j - 1] + 1;
            else {
                if (cnt[i - 1][j] > cnt[i][j - 1])
                    cnt[i][j] = cnt[i - 1][j];
                else
                    cnt[i][j] = cnt[i][j - 1];
            }
        }
    }

    printf("   ");
    for (i = 0; i < len2; i++) {
        printf("%2c ", str2[i]);
    }

    printf("\n");
    for (i = 0; i < len1; i++) {
        printf("%c: ", str1[i]);
        for (j = 0; j < len2; j++) {
            printf("%2d ", cnt[i][j]);
        }
        printf("\n");
    }

    prt(cnt[len1 - 1][len2 - 1], len1 - 1, len2 - 1);

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
