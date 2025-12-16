#include <stdio.h>
#include <math.h>

int main() {
   
    int rideType, requests, points;
    float distance, rating, driverDistance;
    double surgeMultiplier, baseFarePerKm, totalFare, discount, finalFare;
 
    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    printf("Enter ride type (1 = Economy, 2 = Business, 3 = Luxury): ");
    scanf("%d", &rideType);

    printf("Enter number of rides requested in the area: ");
    scanf("%d", &requests);

    printf("Enter loyalty points of passenger: ");
    scanf("%d", &points);

    printf("Enter driver rating (1-5): ");
    scanf("%f", &rating);

    printf("Enter driver distance from passenger (in km): ");
    scanf("%f", &driverDistance);


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
            printf("Invalid ride type.\n");
            return 1;
    }

    discount = (points > 1000) ? 0.20 : 0.05;

    if (rating >= 4 && driverDistance <= 5)
        printf("\nDriver Assigned: Top driver nearby\n");
    else if (rating >= 3 && driverDistance <= 10)
        printf("\nDriver Assigned: Average driver assigned\n");
    else {
        printf("\nNo suitable driver available.\n");
        return 0; 
    }


    totalFare = distance * baseFarePerKm * surgeMultiplier;
    finalFare = totalFare - (totalFare * discount);

    printf("\n----- RIDE SUMMARY -----\n");
    printf("Ride Type: %d\n", rideType);
    printf("Distance: %.2f km\n", distance);
    printf("Surge Multiplier: %.2f\n", surgeMultiplier);
    printf("Base Fare (per km): Rs. %.2f\n", baseFarePerKm);
    printf("Discount Applied: %.0f%%\n", discount * 100);
    printf("Total Fare Before Discount: Rs. %.2f\n", totalFare);
    printf("Final Fare After Discount: Rs. %.2f\n", finalFare);

    return 0;
}