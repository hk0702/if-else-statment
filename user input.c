#include<stdio.h>
#define size 5
int main()
{
    int student_marks[size];
    int i;
    for(i=0; i<size; i++)
    {
        printf("enter the marks of %d of subject =", i+1);
        scanf("%d", &student_marks[i]);
    }
    printf("\n data you entered");
    for(i=0; i<size; i++)
    {
        printf("\n you entered marks [%d]is %d",i,student_marks[i]);
    }
}
