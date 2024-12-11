/* Profit & Loss */
#include<stdio.h>
int main() 
{
    int cp,sp,pr,ls;
    printf("Enter cost price , selling price :");
    scanf("%d%d",&cp,&sp);
    if(sp>cp) 
    {
        pr = sp-cp;
        printf("Profit = %d",pr);
    }
    else 
    {
        ls = cp-sp;
        printf("Loss = %d",ls);
    }
 return 0;
}