#include <stdio.h>

int main(void)
{
    //���������nΪ������ǻ����Ĵ���
    float loan, rate, monthly_pay;
    int n, i = 1;

    //����
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);
    printf("Enter the tomes you pay: ");
    scanf("%d", &n);

    //ѭ��
    while(i <= n){
        loan = loan - monthly_pay + loan * rate / 100.00f / 12.00f;    //�������Լ��ٱ����Ķ���
        printf("Balance remaining after %d payment: $%.2f\n", i, loan);
        i++;
    }
    return 0;

}
