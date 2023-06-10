#include <stdio.h>
int main()
{
    int int1, int2;
    int1 = 15;
    int2 = 15;

    printf("Input the values for int1 and int2 : ");
    scanf("%d %d", &int1, &int2);
    if (int1 == int2)
    {
        printf("int1 and int2 are equal\n");
        }
    else
    {
        printf("int1 and int2 are not equal\n");
}
}
