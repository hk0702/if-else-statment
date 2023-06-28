#include<conio.h>
#define size 5
int main()
{
    int i;
    int student_marks[size];
    int max;
    for(i=0; i<size; i++)
    {
    printf("enter the marks of %d subject =",i+1);
    scanf("%d",&student_marks[i]);
    }
for(i=0; i<size; i++)
{
    if(student_marks[i]>max)
        max=student_marks[i];
}
{
    printf("max marks is =%d",max);
}
}
