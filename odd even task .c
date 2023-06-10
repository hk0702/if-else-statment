#include<stdio.h>
int main()
{
int num;
printf("Enter the Number :");
scanf("%d", &num);

if(num % 4 == 0)
{
printf("%d number is even",num);
}
else
{
printf("%d number is odd",num);
}

}
