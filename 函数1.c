#include <stdio.h>

void printArray(int arr[], int len) {
	int i=0;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[5] = {1, 3, 3, 4, 9};
    printArray(a, 5);  // 传递数组名和长度
    return 0;
}
