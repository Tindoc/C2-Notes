#include <stdio.h>

int main (void)
{
    //�������
    int n, i = 1;
    //��������P15�й���δ��ʼ�������Ľ���
    //�������и�iһ����ʼֵ1����������ѭ������ִ��

    //ȡֵ
    printf("Enter the number n: ");
    scanf("%d", &n);

    while(i * i <= n){
        if (i * i % 2 == 0)
            printf("%d\n", i * i);
        i += 1;
    }

    return 0;

}
