//�����Ŀ����һ������Ϊ��ѭ�����ж���䣨���ʽ��Ҳ����䡱������
//�����Ҿ��ñȽ���Ҫ��������ȡֵ��λ��
//��ѭ������ȡһ��ֵ����ѭ�����ȡһ��ֵ
//����һ���Ƚ���Ҫ�ľ��ǱȽϴ�С��˼·���غ���������������Լ�ѭ���ж�����ѡ��
//
//�����ҳ��Եļ��ַ�������ʱ�������ֶԹ���ʵ�ֵ����
//
//�����һ���򻯱Ƚϴ�С�ķ���


#include <stdio.h>

int main(void)
{
    //�������
    int m, d, y, earliest_m, earliest_d, earliest_y;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    //����earliest�ĳ�ʼֵ�������п��������Զ���ʼ��������,���Զ���ֵ��earliest����
    earliest_d = d;
    earliest_m = m;
    earliest_y = y;

    if(m != 0 && d != 0 && y != 0){    //ʹ��if��䵱��һ������Ϊ0/0/0��ֹ����
        while(m != 0 && d != 0 && y != 0){    //�������߼��������Ƕ��ʹ�ã��൱��(m!=0 && d!=0) && y!=0
            if(y= earliest_y){
                if(m = earliest_m){
                    if(d < earliest_d){
                        earliest_d = d;
                        earliest_m = m;
                        earliest_y = y;
                    }
                }else if(m < earliest_m){
                    earliest_d = d;
                    earliest_m = m;
                    earliest_y = y;
                }
            }else if(y < earliest_y){
                earliest_d = d;
                earliest_m = m;
                earliest_y = y;
            }

            printf("Enter a date (mm/dd/yy): ");
            scanf("%d/%d/%d", &m, &d, &y);

        }

        printf("%d/%d/%.2d is the earliest date\n", earliest_m, earliest_d, earliest_y);

    }

    return 0;
}


/***********
 *��Ҫ��*
 **********/
////1.��������ֱ�����뵽ĳ�����˳�ѭ��
//#include <stdio.h>
//
//int main(void)
//{
//    int i;
//
//    do{
//
//        printf("Enter a number(0 will stop): ");
//        scanf("%d", &i);
//
//    }while(i != 0);
//
//    return 0;
//}

////2.�Ƚ��������Ĵ�С���������
//#include <stdio.h>
//
//int main(void)
//{
//    int n_1, n_2, n_max;
//
//    printf("Enter the number: ");
//    scanf("%d", &n_1);
//    printf("Enter the number: ");
//    scanf("%d", &n_2);
//
//    if(n_1 > n_2)
//        n_max = n_1;
//    else
//        n_max = n_2;
//
//    printf("The biggest number is: %d\n", n_max);
//
//    return 0;
//
//}

//3.�������������Ƚ��������Ĵ�С��������������С�ģ���������Ϊĳ����ʱֹͣ�������һ����ʽ��
//#include <stdio.h>
//
//int main(void)
//{
//    int n_max, n;
//
//    printf("Enter a number(if '0' will stop): ");
//    scanf("%d", &n);
//
//    n_max = n;
//
//    if(n != 0){
//        while(n != 0){
//            if(n > n_max)
//                n_max = n;
//            printf("Enter a number(if 0 will stop): ");
//            scanf("%d", &n);
//        }
//    printf("The biggest number is %d", n_max);
//    }
//
//    return 0;
//}


/*******************
 *  �򻯱Ƚϴ�С  *
 *******************/
//#include <stdio.h>
//
//int main(void)
//{
//    int m, d, y, date, earliest_date;
//
//    printf("Enter a date(mm/dd/yy): ");
//    scanf("%d/%d/%d", &m, &d, &y);
//
//    date = y * 10000 + m * 100 + d;
//
//    earliest_date = date;
//
//    while (date != 0){
//        if(date < earliest_date)
//            earliest_date = date;
//
//        printf("Enter a date(mm/dd/yy): ");
//        scanf("%d/%d/%d", &m, &d, &y);
//        date = y * 10000 + m * 100 + d;
//    }
//    printf("%d/%d/%.2d is the earliest date\n", (earliest_date - earliest_date / 10000 * 10000)/100, earliest_date % 100, earliest_date / 10000);
//
//    return 0;
//}
