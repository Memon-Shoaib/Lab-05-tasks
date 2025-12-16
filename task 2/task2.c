#include <stdio.h>

int main() {
    int type, distance, fare = 0;

    printf("Enter ride type:\n1 = Economy\n2 = Business\n3 = Luxury\n");
    scanf("%d", &type);

    printf("Enter distance:\n1 = Short\n2 = Long\n");
    scanf("%d", &distance);

    switch (type) {
        case 1:
        case 2:
        case 3:
            if (distance == 1)
                fare = 100;
            else if (distance == 2)
                fare = 300;
            else
                printf("Invalid distance.\n");
            break;

        default:
            printf("Invalid ride type.\n");
            break;
    }

    if (fare > 0)
        printf("The assigned base fare is: %d\n", fare);

    return 0;
}
