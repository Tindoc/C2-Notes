//square3��P77������˵����P71

#include <stdio.h>

int main(void)
{
  int i, n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  odd = 3;
  for (i = 1, square = 1; i <= n; ++i, odd += 2) {
    printf("%10d%10d\n", i, square);
    square += odd;
  }
  //��֪����Ŀ����˼�ǲ������

  return 0;
}
