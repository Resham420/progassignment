#include <stdio.h>
#include <stdlib.h>

int main()
{
int choice , amount;
int result;
printf("enter amount");
scanf("%d",&amount);
printf("9.mili second into hour");
printf("10.hour into mili second");
scanf("%d",&choice);
if(choice==9)
{
result=amount*0.000000028;
}
if(choice==10)
{
result=amount/0.000000028;
}
printf("result=%d" ,&result);
getch();
}
