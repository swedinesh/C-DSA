#include <stdio.h>

// Function to determine profit or loss
void calculateProfitOrLoss(int cp, int sp) {
    if (sp > cp) {
        int profit = sp - cp;
        printf("Profit = %d\n", profit);
    } else if (cp > sp) {
        int loss = cp - sp;
        printf("Loss = %d\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }
}

int main() {
    int costPrice, sellingPrice;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &costPrice, &sellingPrice);

    // Call the function to determine profit or loss
    calculateProfitOrLoss(costPrice, sellingPrice);

    return 0;
}
