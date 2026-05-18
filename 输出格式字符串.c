/* 文件名：string_formats.c
 * 功能：演示字符串（%s）的格式化输出，包括宽度、精度（截断）、左/右对齐等。
 */

#include <stdio.h>

int main() {
    char *str = "Hello, World!";
    char *shortStr = "Hi";

    printf("=== 字符串格式化示例 ===\n");

    // 1. 基本输出
    printf("1. 完整输出：%s\n", str);
    
    // 2. 宽度（右对齐）
    printf("2. 宽度20，右对齐：%20s\n", str);    // 输出 "        Hello, World!"
    printf("3. 宽度20，左对齐：%-20s\n", str);   // 输出 "Hello, World!        "
    
    // 3. 精度（限制输出字符数）
    printf("4. 只输出前5个字符：%.5s\n", str);   // 输出 "Hello"
    printf("5. 限制5字符，宽度10，右对齐：%10.5s\n", str); // 输出 "     Hello"
    printf("6. 限制5字符，宽度10，左对齐：%-10.5s\n", str);// 输出 "Hello     "
    
    // 4. 宽度与短字符串
    printf("7. 短字符串宽度10，右对齐：%10s\n", shortStr);   // 输出 "        Hi"
    printf("8. 短字符串宽度10，左对齐：%-10s\n", shortStr);  // 输出 "Hi        "
    
    // 5. 精度大于实际长度，输出完整字符串
    printf("9. 精度20（大于实际长度）：%.20s\n", str); // 输出完整 "Hello, World!"
    
    return 0;
}
