#include<stdio.h>
#define size 5
int main()
{


    int i;
    int first_subject[size];
    int second_subject[size];
    int total_marks[size];

        printf("enter the first_subject marks:-\n");

    for(i=0; i<size; i++)
    {
        printf("enter the marks of %d student=",i+1 );
        scanf("%d",&first_subject[i]);
    }

    {
     printf("enter the second_subject marks:-\n");
    }
    for(i=0; i<size; i++)
    {
        printf("enter the marks of %d student=", i+1);
        scanf("%d",&second_subject[i]);
    }



    printf("total_marks of each students\n");
    for(i=0; i<size; i++)
    {
        total_marks[i]=first_subject[i]+second_subject[i];
        printf("\ntotal_marks is %d student=%d",i+1,total_marks[i]);

        }
}
