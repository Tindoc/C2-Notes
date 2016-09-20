#include <stdio.h>
#include <string.h>

/* external variables */
#define MSG_LEN 100

/* function prototype */
void reverse(char *message);

int main(void)
{
    char message[MSG_LEN + 1];

    printf("Enter a message: ");
    gets(message);

    printf("Reversal is: ");
    reverse(message);

    return 0;
}

void reverse(char *message)
{
    char *start, *stop, temp;
    int i = 0;

    start = &message[0];
    stop = &message[strlen(message)];
    printf("%c\n%c", start, stop);

    while (start != stop || start + 1 != stop) {
        temp = *start;
        *start = *stop;
        *stop = temp;
        start++;
        stop--;
        printf("%d", i++);
    }

    puts(message);
}

