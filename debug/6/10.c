#include <stdio.h>
int main() {
    char pms[3];
    char change_pms[100][2];
    int i;
    i = 0;
    int j;
    int a = 0;//�ļ�������Ȩ��ֵ
    int b = 0;
    int count = 0;
    //���뵱ǰ�ļ�Ȩ��
    scanf("%s\n", pms);
    //printf("%s", pms);
    //������ӻ���ɾ�����ļ�Ȩ��
    while (scanf("%s\n",change_pms[i++]) != EOF)
    count=i;
    //�ж�ԭ�ļ���Ȩ�ޣ���ʮ���Ʊ�ʾ
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
