#include <stdio.h>

#define LARGEST 50

void reverse_name(char *name);

int main(void)
{
    char name[LARGEST + 1];    //+1�����õı��ϰ�ߣ�Ϊ���Ŀ��ַ�Ԥ��λ��

    printf("Enter a first and last name: ");
    gets(name);

    reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
    int i = 0, n = 0;
    char first_word;

    while (name[i] == ' ')    //�����֮ǰ��0
        i++;
    first_word = name[i];

    while (name[i] != ' ')    //�����
        i++;
    while (name[i] == ' ')    //���������֮���0
        i++;
    for ( ; name[i] != ' '; i++)
        printf("%c", name[i]);

    printf(", %c.", first_word);
}
