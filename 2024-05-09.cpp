// 2024-05-09.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

#define MAX 10  // strat를 (1,0)으로 하려면 MAX를 11로 해야한다.
int gold[MAX][MAX], cell[MAX][MAX], path[MAX][MAX];

int main()
{
    int r = 0, c = 0;
    printf("행과 열의 크기를 입력하세요: ");
    scanf("%d %d", &r, &c);
    printf("배열을 입력하세요: \n");
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            scanf("%d", &gold[i][j]);
        }
    }
    int max = 0;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (cell[i - 1][j] > cell[i][j - 1]) {
                max = cell[i - 1][j];
                cell[i][j] = max + gold[i][j];
            }
            else {
                max = cell[i][j - 1];
                cell[i][j] = max + gold[i][j];
            }
        }
    }

    printf("%d\n", cell[r][c]);

    /*int i = r, j = c;
    while (i > 0 && j > 0) {
        path[i][j] = 1;
        if (cell[i - 1][j] > cell[i][j - 1]) {
            i--;
        }
        else {
            j--;
        }
    }*/

    // 내가 짠 코드
    int i = r, j = c;
    path[i][j] = 1;
    while (i > 0 and j > 0) {
        if (cell[i - 1][j] > cell[i][j - 1]) {
            path[i - 1][j] = 1;
            i--;
        }
        else {
            path[i][j - 1] = 1;
            j--;
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            printf("%d ", path[i][j]);
        }
        printf("\n");
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
