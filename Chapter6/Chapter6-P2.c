#include <stdio.h>

int main (void)
{
    //���������lΪת����������ȷ��m��n�Ĵ�С
    int a, b, m, n, mod, GCD;

    //ȡֵ
    printf ("Enter two integers: ");
    scanf ("%d %d",&a, &b);

    //�ж�m,n��С
    if (a > b)
        m = a, n = b;
    else
        m = b, n = a;

    //ѭ��
    if (a != 0 && b != 0){
        while (mod != 0) {
            mod = m % n;
            m = n;
            n = mod;
        }
        printf ("Greatest common divisor: %d",m);
    }
    else if (m == 0)
        printf ("Greatest common divisor: %d",n);
    else if (n == 0)
        printf ("Greatest common divisor: %d",m);

    return 0;
}

/***********
  �ٷ���
 ***********/

//#include <stdio.h>
//
//int main(void)
//{
//  int m, n, remainder;
//
//  printf("Enter two integers: ");
//  scanf("%d%d", &m, &n);
//
//  while (n != 0) {
//    remainder = m % n;
//    m = n;
//    n = remainder;
//  }
//
//  //���ϵ�
//  //1. n != 0�Ĵ��ڲ���Ϊ���ų�m����nΪ0�����⣬����Ϊ�˱������Ϊ0
//  //2. ȡ�ຯ�����ϡ�0�����κβ�Ϊ0��������0������ѧ֪ʶ
//  //3. ����ȡ�ຯ��Ϊʲô���ÿ���ǰ����С�ں�������ԭ�������������ܹ��Զ�ת��˳������һ������ġ�����3���Ϳ���֪����
//  //��Ȼ�ǿ��ǵ���ȫ�ˣ������ڼ�����ϻ��ǰܸ��˹ٷ��𰸣�ԭ����û����������Լ�û����ϵ�����������ҷ���
//
//  printf("Greatest common divisor: %d\n", m);
//
//  return 0;
//}


/**********
 * ����3  *
 **********/
//#include <stdio.h>
//
//int main(void)
//{
//  int m, n, remainder;
//
//  printf("Enter two integers: ");
//  scanf("%d%d", &m, &n);
//
//  while (n != 0) {
//    remainder = m % n;
//    m = n;
//    n = remainder;
//    printf("remainder = %d;m = %d;n = %d\n", remainder, m, n);    //���Կ���ÿһ���Ĳ���
//  }
//
//  printf("Greatest common divisor: %d\n", m);
//
//  return 0;
//}
