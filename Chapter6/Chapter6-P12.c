#include <stdio.h>

int main(void)
{
    //���������eΪ�������
    int i = 1,demon = 1;
    float e, sum = 1.00f;

    printf("Enter the e: ");
    scanf("%f", &e);

    while((1.00f / demon) > e){
        demon *= i;
        sum = sum + 1.00f / demon;
        printf("%d of terms is %f\n", i+1, 1.00f / demon);
        //������ʾÿһ�����ֵ�������������Ա�
        i++ ;
    }
    printf("e is %f \nsum is %f\n", e, sum);

    return 0;
}
