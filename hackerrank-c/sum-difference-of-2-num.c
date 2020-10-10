/* 
Task Title: Sum and Difference of 2 Numbers

Task:   Your task is to take two numbers of int data type, 
        two numbers of float data type as input and output their sum:

        1.Declare 4 variables: two of type int and two of type float.
        2.Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
        3.Use the + and - operator to perform the following operations:

            Print the sum and difference of two int variable on a new line.
            Print the sum and difference of two float variable rounded to one decimal place on a new line. 

Constraints:    1 <= integer variables <= 10^4   
                1 <= float variables <= 10^4

Output Format:  Print the sum and difference of both integers separated by a space on the first line, 
                and the sum and difference of both float (scaled to 1
                decimal place) separated by a space on the second line.

.

Sample Input

10 4
4.0 2.0

Sample Output

14 6
6.0 2.0

.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
    float num3,num4;
    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&num3,&num4);
    printf("%d %d",num1+num2,num1-num2);
    printf("\n%.1f %.1f",num3+num4,num3-num4);
    return 0;
}
