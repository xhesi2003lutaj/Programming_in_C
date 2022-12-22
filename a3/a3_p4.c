/* CH-230-A
a3_a4.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

    #include<stdio.h>
    int position(char str[], char c)
    {
     int idx;
    /* Loop until end of string */

    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx);
    /* do nothing */
    return idx;
    }
    int main() {
    char line[80];

    while (1) {
    printf("Enter string:\n");
    fgets(line, sizeof(line), stdin);
    printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
    }

/*The problem was in line 10 
with the empty for loop(no curly brackets), it didn't have a ';
 , so the loop terminated directly and always printed 0. */
