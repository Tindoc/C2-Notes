#include <stdio.h>

int main (void)
{
    int a, b, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d",&a, &b);

    //�������a,bΪ�˱���ԭ������������ֵ
    m = a, n = b;

    //����Euclid�㷨�Լ��ڶ����йܷ�������
    while(n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", a/m, b/m);

    return 0;
}
