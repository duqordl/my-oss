#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

#define MAX_N 50
#define MAX_K 3

typedef struct {
    int x;
    int y;
} House;

int abs(int a) {
    if (a < 0)
        a = -a;
    else
        a = a;
    return a;
}

int dist(House a, House b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int calcMax(House houses[], int n, int bells[], int k) {
    int maxDist = 0;
    for (int i = 0; i < n; i++) {
        int minDist = INT_MAX;
        for (int j = 0; j < k; j++) {
            int d = dist(houses[i], houses[bells[j]]);
            if (d < minDist) {
                minDist = d;
            }
        }
        if (minDist > maxDist) {
            maxDist = minDist;
        }
    }
    return maxDist;
}

void findBest(House houses[], int n, int k, int current, int bells[], int* minMaxDist, int start) {
    if (current == k) {
        int maxDist = calcMax(houses, n, bells, k);
        if (maxDist < *minMaxDist) {
            *minMaxDist = maxDist;
        }
        return;
    }

    for (int i = start; i < n; i++) {
        bells[current] = i;
        findBest(houses, n, k, current + 1, bells, minMaxDist, i + 1);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    House houses[MAX_N];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &houses[i].x, &houses[i].y);
    }

    int bells[MAX_K];
    int minMaxDist = INT_MAX;

    findBest(houses, n, k, 0, bells, &minMaxDist, 0);

    printf("\n%d", minMaxDist);

    return 0;
}