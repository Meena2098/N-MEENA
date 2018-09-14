#include <stdio.h>
int main()
{
    char ch1;
    printf("Enter a character: ");
    scanf("%c",&ch1);

    if( (ch1>='a' && ch<='z') || (ch1>='A' && ch1<='Z'))
        printf("%c is an alphabet.",ch1);
    else
        printf("%c is not an alphabet.",ch1);

    return 0;
}
