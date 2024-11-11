#include <stdio.h>
#define MAX_SIZE 1000 // 배열의 최대 크기
// 2750 수 정렬하기
void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int count;
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("오류: 유효한 배열 크기를 입력하세요.\n");
        return 1;
    }

    if (count > MAX_SIZE) {
        printf("오류: 배열 크기가 최대 크기를 초과했습니다.\n");
        return 1;
    }

    int list[MAX_SIZE]; // 정적 배열 사용

    for (int i = 0; i < count; i++) {
        if (scanf("%d", &list[i]) != 1) {
            printf("오류: 유효한 정수를 입력하세요.\n");
            return 1;
        }
    }

    sort(list, count);
    for (int i = 0; i < count; i++) printf("%d ", list[i]);

    printf("\n"); // 줄바꿈 추가
    return 0;
}