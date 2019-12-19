/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
double INCOME,TAX;
printf("ENTER THE INCOME OF A PERSON : ");
scanf("%lf",&INCOME);
if(INCOME<=1400000)
{
TAX=0;
}
else if(INCOME>1400000 && INCOME<=1600000)
{
TAX=(INCOME-1400000)/4;
}
else if(INCOME>1700000 && INCOME<=2000000)
{
TAX=(((INCOME-1700000)/10)*2)+30000;
}
else if(INCOME>20000000)
{
TAX=(((INCOME-20000000)/10)*3)+130000;
}
printf("THE INCOME TAX PAYABLE OF A PERSON IS : %.2lf",TAX);
return 0;
}