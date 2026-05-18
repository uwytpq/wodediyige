/**
 * 文件名：08_struct.c
 * 功能：结构体基础（使用 typedef）
 */

#include <stdio.h>
#include <string.h>

// 用 typedef 定义结构体类型 Student
typedef struct {
    int id;
    char name[20];
    float score;
} Student;

int main() {
    // 1. 定义结构体变量并初始化
    Student stu1 = {1001, "张三", 85.5};
    Student stu2;

    // 2. 访问成员（点运算符）
    printf("stu1 学号：%d\n", stu1.id);
    printf("stu1 姓名：%s\n", stu1.name);
    printf("stu1 成绩：%.1f\n", stu1.score);

    // 3. 修改成员
    stu1.score = 90.0;
    printf("修改后成绩：%.1f\n", stu1.score);

    // 4. 结构体指针（箭头运算符）
    Student *p = &stu1;
    p->id = 1002;
    strcpy(p->name, "李四");
    printf("通过指针修改后：学号 %d, 姓名 %s\n", stu1.id, stu1.name);

    // 5. 结构体数组
    Student arr[2] = {{1003, "王五", 78.0}, {1004, "赵六", 88.0}};
    int i=0;
    for (i = 0; i < 2; i++) {
        printf("arr[%d]: 学号 %d, 姓名 %s, 成绩 %.1f\n", i, arr[i].id, arr[i].name, arr[i].score);
    }

    return 0;
}
