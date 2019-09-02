#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[50];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}
