/*
Task Title: Play With Characters

Task:
        You have to print the character,ch, in the first line. Then print s in next line. In the last line print the sentence, sen.


Input Format:

        * First,take a character,ch as input.
        * Then take the string,s as input.
        * Lastly, take the sentence sen as input.

Constraints: 

        Strings for s and sen will have fewer than 100 characters, including the newline.

Output Format:

        * Print three lines of output. The first line prints the character,ch.
        * The second line prints the string,s.
        * The third line prints the sentence,sen.

.

Sample Input:

C
Language
Welcome To C!!

Sample Output:

C
Language
Welcome To C!!

.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[50],sen[50];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    //scan sen as MAX_LEN character
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen);
    
    return 0;
}