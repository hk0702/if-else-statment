#include<stdio.h>
#define size 5
int main()
{
    int i;

    int student_marks[size];

    for(i=0;i<size;i++)

    {
        printf("enter the number of %d student= _",i+1);
        scanf("%d", student_marks[i]);
    }


}
