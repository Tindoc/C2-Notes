#include <stdio.h>
int main (void)
{
    //�������
    float num, num_max;
    num = 1;

    //��ȡ��һ��������Ϊ���
    printf ("Enter a number: ");
    scanf ("%f", & num_max);

    //ѭ��ȡ��
    if (num_max > 0){
        while (num > 0){
            printf ("Enter a number:");
            scanf ("%f", & num);
            if (num > num_max){
                num_max = num;
            }
        }
        printf ("The largest number entered was %.2f\n", num_max);
    }
    else
        printf ("Error\n");

    return 0;

}

