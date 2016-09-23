//#include <stdio.h>
//#include <string.h>
//
//#define LENGTH_WORD 20
//#define COUNT_WORDS 30
//
//int main(void)
//{
//    char sentence[COUNT_WORDS][LENGTH_WORDS + 1] = {0}, ch, punctuation;
//    int i, j;
//
//    printf("Enter a sentence: ");
//    for (i = 0; i < COUNT_WORDS; i++) {
//        for (j = 0; j < LENGTH_WORD; ) {
//            ch = getchar();
//            if (ch != ' ' && ch != '\n') {
//                sentence[i][j] = ch;
//                j++;
//            }
//            else {
//                sentence[i][j] = '\0';
//                break;
//            }
//        }
//        if (ch == '\n')
//            break;
//    }   //����forѭ��ȡֵ��Ȼ��ȱ��
//        //���֮ǰ���ڿո������ߵ���֮��Ŀո�ֹһ���Ļ����ո�ᵥ��ռ��һ��
//
//    punctuation = sentence[i][j - 1];
//    sentence[i][j - 1] = '\0';  //�������һ���������ַ����ⴢ��
//                                //���滻Ϊ���ַ�������Ҳ��ȱ��
//                                //���û�б����Ž��޷���ȷ��ʾ
//    printf("Reversal of sentence:");
//    for ( ; i > 0; i--)
//        printf("%s ", &sentence[i]);
//    printf("%s%c", &sentence[i], punctuation);
//
//    return 0;
//}


//�Ľ��汾 ��̬�����ַ��������飨17�£�+ָ������
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH_WORD 20
#define COUNT_WORDS 30


int main(void)
{
    char *sentence[COUNT_WORDS], ch, punctuation;
    //ʹ�ô����ַ�����ָ���������Խ�����������ո������
    int i, len, j;

    printf("Enter a sentence: ");
    for (i = 0; i < COUNT_WORDS; i++) {
        sentence[i] = (char *)malloc(LENGTH_WORD * sizeof(char));
        //��̬�����ַ������ȵ�����
        if (sentence[i] == NULL) {
            printf("allocation failed\n");
            exit(1);
        }
        //�ж��ڴ�����Ƿ�Ϊ��
        scanf(" %s", sentence[i]);
        ch = getchar();
        len = strlen(sentence[i]);
        sentence[i][len] = '\0';
        if (ch == '\n') {
            if (sentence[i][len - 1] == '.'     ||
                sentence[i][len - 1] == '\?'    ||
                sentence[i][len - 1] == '!'
                ) {
                punctuation = sentence[i][len - 1];
                sentence[i][len - 1] = '\0';
            }   //second-if
            break;
        }   //first-if
    }   //for

    for ( ; i > 0; i--)
        printf("%s ", sentence[i]);
    printf("%s%c", sentence[0], punctuation);

    return 0;
}
