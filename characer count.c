/*
* Write a program that asks the user to enter some text.
* Then for each character taken in alphabetical order,
* the program prints as many stars as its number of
* occurrences. : Non-alphabetical characters (i.e.,
* characters not in [a,b,..,z] or [A,B,..,Z]) that may
* present in the input will be ignored and thus they will
* not appear in the output.
*/

#include <stdio.h>
int main()
{
    setvbuf(stdout, NULL, _IONBF, 0);
    //prompting the user input
    printf("Enter the text: ");
    
    //receiving the text
    //receiving only letters, also converting uppercase to lowercase
    char text[100];
    int char_cnt = 0;
    char letter;
    do {
        letter = getchar();
        if (letter >= 'A' && letter <= 'Z') {
            letter += 32;
            text[char_cnt++] = letter;
        } else if (letter >= 'a' && letter <= 'z') {
            text[char_cnt++] = letter;
        }
    } while (letter != '\n');
    
    int ch, k, u;
    for (ch = 'a'; ch <= 'z'; ch++) {
        //counting the occurrence of each letter from 'a' to 'z'
        int occurence = 0;
        for (k = 0; k < char_cnt; k++) {
            if (text[k] == ch)
                occurence++;
        }
        //printing * according to the number of corresponding letters
        if (occurence > 0) {
            printf("%c   ", ch);
            for (u = 0; u < occurence; u++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
