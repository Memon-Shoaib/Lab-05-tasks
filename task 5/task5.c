#include <stdio.h>

int main() {
    int points;
    float discount;

    printf("Enter loyalty points of the passenger: ");
    scanf("%d", &points);

    discount = (points > 1000) ? 20.0 : 5.0;

    printf("Final Discount: %.1f%%\n", discount);

    return 0;
}
