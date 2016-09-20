#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* external variable */
#define MSG_LEN 100

/* function prototype */
bool is_palindrome(const char *message);

int main(void)
{
    char message[MSG_LEN + 1];

    printf("Enter a message: ");
    gets(message);

    if (is_palindrome(message))
        printf("Palindrome.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}

bool is_palindrome(const char *message)
{
    int len = strlen(message);
    char *start, *stop;

    start = &message[0];
    stop = &message[len];

    if (len % 2) {
        while (start - stop != 1)
            if (*start != *stop) {
                return false;
            }
    }
    else
        while (start != stop)
            if (*start != *stop) {
                return false;
            }

    return true;
}
