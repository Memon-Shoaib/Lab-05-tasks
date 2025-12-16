#include <stdio.h>
#include <math.h>

int main() {
    int requests;
    double surgeMultiplier;

                                         
    printf("Enter the number of rides requested in the area: ");
    scanf("%d", &requests);

    surgeMultiplier = sqrt(requests) / 2.0;

    if (surgeMultiplier > 3) 
    {
         surgeMultiplier = 3;
    }

    printf("Final Surge Multiplier: %.2f\n", surgeMultiplier);

    return 0;
}
