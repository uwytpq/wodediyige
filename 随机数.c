/**
 * 文件名：09_time_rand.c
 * 功能：时间函数与随机数生成
 * 包括：time(NULL) 获取当前时间戳，srand 设置种子，rand 生成随机数
 */

#include <stdio.h>
#include <stdlib.h>   // rand, srand
#include <time.h>     // time

int main() {
    // 1. 用当前时间设置随机数种子（只需一次）
    srand((unsigned int)time(NULL));

    // 2. 生成一个 0 ~ 99 的随机数
    int r1 = rand() % 100;
    printf("0~99 的随机数：%d\n", r1);

    // 3. 生成一个 1 ~ 100 的随机数
    int r2 = rand() % 100 + 1;
    printf("1~100 的随机数：%d\n", r2);

    // 4. 生成两个随机数验证
    printf("再生成两个随机数：%d, %d\n", rand(), rand());

    // 5. 注意：如果没有 srand，每次运行生成的随机数序列会相同
    return 0;
}
