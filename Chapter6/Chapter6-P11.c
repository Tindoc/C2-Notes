#include <stdio.h>

int main(void)
{
    //�������������Ҫ�����ʱ��Ҫ��ʼ��ֵ,demon�Ƿ�ĸ
    int n, demon = 1, i = 1;
    float sum = 1.00f;

    printf("Enter the n: ");
    scanf("%d", &n);

    while(i <= n){
        demon *= i;
        sum = sum + 1.00f / demon;    //������1.00f��Ϊ�˱�����������ض̵�Ӱ��,P15
        i++ ;
    }
    printf("e is :%f", sum);

    return 0;
}

/*
�����Ŀ�漰����Ȼ����e��һЩ���⣬һ��ʼ�е���B
����ʵһ��ʼ�ܾ����Ǹ����ģ�һ��ʼ�����Ϊ��1/2�������Һ���û��ѧ�������Ľ׳˰�
  ����ԭ����1/��2����������~~~�壩
�������˵��й�e�����Ͽ�����������ѧ������
http://www.guokr.com/article/50264/
https://www.zhihu.com/question/27054780
*/
