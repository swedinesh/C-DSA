/* Profit Loss */
#include <stdio.h>
int main() {
    float cp, sp, porl, profit, loss;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    porl = sp - cp;

    if (sp > cp) 
    {
        profit = sp - cp;
        printf("Profit: %.2f\n", profit);
    } 
    else if (cp > sp) 
    {
        loss = cp - sp;
        printf("Loss: %.2f\n", loss);
    } 
    else 
    {
        printf("No profit, no loss.\n");
    }

    return 0;
}
