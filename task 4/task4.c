#include <stdio.h>
#include <math.h>

int main() {
    float distance;
    int rideType;
    int requests;
    double surgeMultiplier, baseFarePerKm, total_Fare;                    
    printf("Enter distance (in km): ");
    scanf("%f", &distance);
                                
    printf("Enter ride type (1 = Economy, 2 = Business, 3 = Luxury): ");
    scanf("%d", &rideType);
                                    
    printf("Enter number of rides requested in the area: ");
    scanf("%d", &requests);
    surgeMultiplier = sqrt(requests) / 2.0;
    if (surgeMultiplier > 3)
        surgeMultiplier = 3;

    switch (rideType) {
        case 1:
            baseFarePerKm = 50;
            break;
        case 2:
            baseFarePerKm = 100;
            break;
        case 3:
            baseFarePerKm = 200;
            break;
        default:
            printf("Invalid ride type entered.\n");
            return 1;
    }

                           
    total_Fare = distance * baseFarePerKm * surgeMultiplier;

    printf("Surge Multiplier: %.2f\n", surgeMultiplier);
    printf("Total Fare: Rs. %.2f\n", total_Fare);

    return 0;
}
