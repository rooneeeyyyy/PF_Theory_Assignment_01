/*Question 02
Elevator Simulation*/

#include <stdio.h>

int main() {

    int N, floor, currentfloor = 0;

    printf("Enter the number of floor requests: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {

        printf("Enter floor request %d: ", i);
        scanf("%d", &floor);

        if (floor > currentfloor) {
            printf("Moving Up\n");
        }
        else if (floor < currentfloor) {
            printf("Moving Down\n");
        }
        else {
            printf("Doors Opening\n");
        }

        currentfloor = floor;
    }

    return 0;
}