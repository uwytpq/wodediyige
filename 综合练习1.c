#include <stdio.h>
typedef struct {
    int xue;
    char ming[20];
    double cheng;
} student;

void fan(student *p, int n, const char *q) {
    int i = 0;
    FILE *fp = fopen(q, "w");
    if (fp == NULL) return;               // 防止文件打开失败
    for (i = 0; i < n; i++) {
        fprintf(fp, "%d %s %.1f\n", p[i].xue, p[i].ming, p[i].cheng);  // 加上 \n 换行
    }
    fclose(fp);
}

void han(student *p, int n, const char *q) {
    FILE *fp = fopen(q, "r");
    if (fp == NULL) return;               // 防止文件打开失败
    printf("从名为 %s 文本文件中读取到的内容\n", q);
    int a = 0;
    for (a = 0; a < n; a++) {
        // 修正：%lf 读取 double，去掉 &p[a].ming 中的 &
        fscanf(fp, "%d %s %lf", &p[a].xue, p[a].ming, &p[a].cheng);
    }
    fclose(fp);

    for (a = 0; a < n; a++) {             // 用参数 n 代替写死的 3
        printf("学号%d 姓名%s 成绩%.1f\n", p[a].xue, p[a].ming, p[a].cheng);
    }
}

int main() {
    // 这句其实没用，可以删除或保留（不影响）
    // FILE *wen = fopen("data.test", "w");
    // 如果你不想保留，直接注释掉即可

    student stu[3] = {
        {1, "张存越", 95.0},
        {2, "宋京峰", 90.0},
        {3, "陈树坤", 80.0}
    };

    fan(stu, 3, "data.test");
    student nstu[3];
    han(nstu, 3, "data.test");
    return 0;
}











