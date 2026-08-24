//Q22: Write a program to find profit or loss percentage given cost price and selling price.//

#include<stdio.h>
int main() {
    int cp,sp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);    
    printf("Enter Selling Price: ");
    scanf("%d",&sp);

    if(sp>cp) {
        int profit = sp - cp;
        float profit_percentage = (profit * 100.0) / cp;
        printf("Profit: %d\n", profit);
        printf("Profit Percentage: %.2f\n", profit_percentage);
    } else if(cp>sp) {
        int loss = cp - sp;
        float loss_percentage = (loss * 100.0) / cp;
        printf("Loss: %d\n", loss);
        printf("Loss Percentage: %.2f\n", loss_percentage);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
