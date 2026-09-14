#include<stdio.h>

int main(){
    float cost_price, sell_price;
    float loss_percentage, profit_percentage;
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &sell_price);

    if(cost_price>sell_price){
        printf("loss");
        loss_percentage = ((cost_price - sell_price) / cost_price) * 100;
        printf("Loss percentage: %.2f%%\n", loss_percentage);
        return 0;
    }
    else if(cost_price<sell_price){
        printf("profit");
        profit_percentage = ((sell_price - cost_price) / cost_price) * 100;
        printf("Profit percentage: %.2f%%\n", profit_percentage);
        return 0;
    }
    else{
        printf("neither profit nor loss");
        return 0;
    }
}