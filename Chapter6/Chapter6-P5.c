#include <stdio.h>

int main(void)
{
    int num, reverse_num;    //��int�Ļ���2147483647֮ǰ��ʾû�����⣬������֮�����ʾû���������
                             //��2147483648�Ի���ʾ-8-4-6-3-8-4-7-4-1-2,��֪����ʲôԭ��

    printf("Enter a any-digit number: ");
    scanf("%d", &num);

    printf("The reverse is: ");

    do {
        reverse_num = num % 10;
        num = num / 10;
        printf("%d", reverse_num);
    }while(num != 0);

    return 0;
}
