#include <stdio.h>

int main(void)
{
    //��Ϊ�õ�������for��䣬���Զ����˱���i_days��i_starting_day
    int days, starting_day, i_days, i_starting_day;

    //����
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week:(1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for(i_starting_day = 1; i_starting_day != starting_day; i_starting_day++)
        printf("   ");
    //�����for��������ʼ�ղ���Sun��ռ�õĿո�
    //�����ʼ���ǵ����죬���i_starting_day=3
    //��������i_starting_day=3,ʵ��ռ��������λ��
    //����������(i_days + i_starting_day - 1)��Ҫ��1

    for(i_days = 1; i_days <= days; i_days++){
        printf("%3d", i_days);
        if((i_days + i_starting_day - 1) % 7 == 0)    //��һ�����ڵ����һ�������ifʵ��ת��
            printf("\n");
    }

    /*
    printf("\n\n%d %d",i_starting_day, i_days );    //�����Ҫ�����鿴����i��ֵ
    */

    return 0;
}


/*�ٷ���
#include <stdio.h>

int main(void)
{
  int i, n, start_day;

  printf("Enter number of days in month: ");
  scanf("%d", &n);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start_day);

  // print any leading "blank dates" ��ӡ��ʼ�ġ��հ����ڡ�
  for (i = 1; i < start_day; i++)
    printf("   ");

  // now print the calendar ���ڴ�ӡ����
  for (i = 1; i <= n; i++) {
    printf("%3d", i);
    if ((start_day + i - 1) % 7 == 0)
      printf("\n");
  }

  return 0;
}
  //��ξ��úʹ𰸲������£��𰸵ĸ���֮���������³�ʼ����i��ֵ

*/
