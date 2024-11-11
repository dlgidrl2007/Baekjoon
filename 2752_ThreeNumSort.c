#include <stdio.h>
// 2752 세수정렬
int main() {
    int nums[3];

    // 세 정수 입력 받기
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    // 오름차순 정렬
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // 결과 출력
    printf("%d %d %d\n", nums[0], nums[1], nums[2]);

    return 0;
}