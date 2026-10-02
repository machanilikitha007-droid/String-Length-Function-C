#include <stdio.h>

int getLength(char text[])
{
    int length = 0;

    while (text[length] != '\0')
        length++;

    return length;
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("String Length = %d\n", getLength(text));

    return 0;
}
