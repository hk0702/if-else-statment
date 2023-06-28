#include<stdio.h>
int main()
{


/*
    int data[4][3]={{1,2,3},{4,5,6},{7,8,9},{2,3,4}};
    int i=0,j=0;
    for(i = 0; i<4; i++){
    for(j = 0; j<3; j++)
    {
        printf("[%d] [%d]=%d \n",i,j, data[i][j]);
    }*/


/*2D array example: Storing elements in a matrix and printing it*/


    int i,j;
    int data[3][3];
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {

    printf("enter a[%d][%d]:",i,j);
    scanf("%d",&data[i][j]);
}
}
printf("\n printing the elements....\n");
for(i=0; i<3; i++)
{
    printf("\n");
for(j=0; j<3; j++)
{
    printf("%d\t",data[i][j]);
}
    }
    }
