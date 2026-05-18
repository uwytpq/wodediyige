/**
 * 文件名：15_file.c
 * 功能：C语言文件操作基础
 * 包括：fopen, fclose, fputc, fgetc, fprintf, fscanf, fwrite, fread
 */

#include <stdio.h>
#include <stdlib.h>  // exit

int main() {
    // ========== 1. 写入文本文件（字符方式） ==========
    FILE *fp1 = fopen("test1.txt", "w");
    if (fp1 == NULL) {
        printf("无法创建文件\n");
        exit(1);
    }
    fprintf(fp1, "Hello, file!\n");
    fprintf(fp1, "第二行内容。\n");
    fclose(fp1);
    printf("文件 test1.txt 写入完毕。\n");

    // ========== 2. 读取文本文件（逐行读取） ==========
    char line[100];
    FILE *fp2 = fopen("test1.txt", "r");
    if (fp2 == NULL) {
        printf("无法打开文件\n");
        exit(1);
    }
    printf("读取 test1.txt 的内容：\n");
    while (fgets(line, sizeof(line), fp2) != NULL) {
        printf("%s", line);
    }
    fclose(fp2);
    printf("\n");

    // ========== 3. 格式化写入（fprintf） =====
    FILE *fp3 = fopen("data.txt", "w");
    if (fp3 == NULL) {
        printf("无法创建文件\n");
        exit(1);
    }
    int id = 1001;
    char name[20] = "张三";
    float score = 85.5;
    fprintf(fp3, "%d %s %.1f\n", id, name, score);
    fclose(fp3);

    // ========== 4. 格式化读取（fscanf） ==========
    FILE *fp4 = fopen("data.txt", "r");
    if (fp4 == NULL) {
        printf("无法打开文件\n");
        exit(1);
    }
    int id2;
    char name2[20];
    float score2;
    fscanf(fp4, "%d %s %f", &id2, name2, &score2);
    printf("从 data.txt 读到：学号 %d，姓名 %s，成绩 %.1f\n", id2, name2, score2);
    fclose(fp4);

    // ========== 5. 二进制写入（fwrite）结构体 ==========
    typedef struct {
        int id;
        char name[20];
        float score;
    } Student;

    Student stu1 = {2001, "李四", 92.0};
    FILE *fp5 = fopen("student.bin", "wb");
    if (fp5 == NULL) {
        printf("无法创建二进制文件\n");
        exit(1);
    }
    fwrite(&stu1, sizeof(Student), 1, fp5);
    fclose(fp5);
    printf("二进制文件 student.bin 写入完成。\n");

    // ========== 6. 二进制读取（fread） ==========
    Student stu2;
    FILE *fp6 = fopen("student.bin", "rb");
    if (fp6 == NULL) {
        printf("无法打开二进制文件\n");
        exit(1);
    }
    fread(&stu2, sizeof(Student), 1, fp6);
    printf("从二进制文件读到：学号 %d，姓名 %s，成绩 %.1f\n", stu2.id, stu2.name, stu2.score);
    fclose(fp6);

    return 0;
}
