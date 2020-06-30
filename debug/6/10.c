#include <stdio.h>
int main() {
    char pms[3];
    char change_pms[100][2];
    int i;
    i = 0;
    int j;
    int a = 0;//文件本来的权限值
    int b = 0;
    int count = 0;
    //输入当前文件权限
    scanf("%s\n", pms);
    //printf("%s", pms);
    //输入添加或者删除的文件权限
    while (scanf("%s\n",change_pms[i++]) != EOF)
    count=i;
    //判断原文件的权限，用十进制表示
    for (i = 0; pms[i] != '\0'; i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else {
            a += 1;
        } 
    }

    for (i = 0; i < count; i++) {
        j = 0;
        if (change_pms[i][j] == '+') 
        {
           if (change_pms[i][j + 1] == 'r') {
                b = b + 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                b = b + 2;
            } else {
                b = b + 1;
            }
        }else {
            if (change_pms[i][j + 1] == 'r') {
                b = b - 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                b = b - 2;
            } else {
                b = b - 1;
            }
        }
    }
    
    printf("%d", a + b);
    return 0;
}
