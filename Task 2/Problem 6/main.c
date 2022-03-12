#include <stdio.h>
#include <string.h>

int main()
{   
    int i, j;
    char str[100];
    int length;

    printf("Enter some text: ");
    fgets(str, 100, stdin);

    length = strlen(str);

    for(i = 0 ; i < length ; i++)
    {
        if(str[0] == ' ')
        {
            for(i = 0 ; i < (length-1) ; i++)
                str[i] = str[i + 1];

            str[i] = '\0';
            length--;
            i = -1;
            continue;
        }

        if(str[i] ==' ' && str[i + 1] == ' ')
        {
            for(j = i ; j < (length-1) ; j++)
                str[j] = str[j + 1];

            str[j] = '\0';
            length--;
            i--;
        }
    }

    printf("Text after removing blanks: ");
    puts(str);

    return 0;
}