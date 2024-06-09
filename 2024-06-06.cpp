// 2024-06-06.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 과제1
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int N;
    scanf("%d", &N);

    int* weight = (int*)calloc((N + 1), sizeof(int));
    int* dp = (int*)calloc((N + 1), sizeof(int));

    for (int i = 1; i <= N; ++i) {
        scanf("%d", &weight[i]);
    }

    dp[0] = 0;
    dp[1] = weight[1];
    if (N > 1) {
        dp[2] = weight[1] + weight[2];
    }

    for (int i = 3; i <= N; ++i) {
        dp[i] = max(dp[i - 2], dp[i - 3] + weight[i - 1]) + weight[i];
    }

    printf("%d\n", dp[N]);

    free(weight);
    free(dp);

    return 0;
}*/



// 과제2
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>

#define TAPE_SIZE 100

int main() {
    char tape[TAPE_SIZE];
    scanf("%s", tape);
    int len = strlen(tape);

    int state = 0;
    int head = 0;

    while (tape[head] != '#') {
        if (tape[head] == '0' && state == 0) {
            tape[head] = '_';
            state = 0;
            head++;
        }
        else if (tape[head] == '1' && state == 0) {
            state = 1;
            head++;
        }
        else if (tape[head] == '1' && state == 1) {
            head++;
        }
        else if (tape[head] == '_') {
            state = 0;
            head++;
        }
        else if (tape[head] == '0' && state == 1) {
            head++;
        }
    }

    printf("%s\n", tape);

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
