/* CH-230-A
a4_p11.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// defining the prototype
int count_insensitive(char *str, char c)
{
    int i, count = 0;
    for (i = 0; i < strlen(str); i++)
    { // declaring the upper and lower case equal
        if (toupper(c) == toupper(str[i]))
        {
            count++; // search in te string
        }
    }
    return count;
}
int main()
{
    int i;
    char *str, *str2;
    // dynamically allocate a string of maximal length of 50 characters
    str = (char *)malloc(sizeof(char) * 50);
    if (!str)
    {
  
    return -1;  }
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    int j=strlen(str);
    // copying the first string to thr second one
    str2 = (char *)malloc(sizeof(char) * j);
    if (!str2)
    {
        return -1;
    }
    for (i = 0; i < strlen(str); i++)
    {
        str2[i] = str[i];
    }
    // freeing the memory of the first string
    free(str);
    // calling the function,searching for each charcter in str2,printing the results
    printf("the character %c occurs %d times.\n", 'b', count_insensitive(str2, 'b'));
    printf("the character %c occurs %d times.\n", 'H', count_insensitive(str2, 'H'));
    printf("the character %c occurs %d times.\n", '8', count_insensitive(str2, '8'));
    printf("the character %c occurs %d times.\n", 'u', count_insensitive(str2, 'u'));
    printf("the character %c occurs %d times.\n", '$', count_insensitive(str2, '$'));
    // freeing the memory of the second string
    free(str2);

    return 0;
}
