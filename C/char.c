#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int ch, arr1[100],arr2[100];
    scanf("%c",&ch);
    scanf("%s",arr1);

    scanf("\n");
    scanf("%[^\n]%*c",arr2);

    printf("%c\n%s\n%s",ch,arr1,arr2);
    return 0;
}


