/*Question 1
Hotel Booking System.*/

#include<stdio.h>

int main(){
    int NumGuest, Standard, Deluxe, Suite, Selection, Nights, Room, Price;
    float Total, TotalRevenue;
    Total = 0.0;
    TotalRevenue = 0.0;
    int n = NumGuest;

    printf("Enter the number of guests: \n");
    scanf("%d",&NumGuest);

    while (NumGuest>=1)
    {   NumGuest -=1;
        printf("Type 1 for selecting the trip on PEAK SEASON:\n");
        printf("Type 2 for selecting the trip on OFF-PEAK SEASON: \n");
        scanf("%d",&Selection);
        if (Selection == 1){
            Standard = 5000, Deluxe = 8000, Suite = 12000;
            printf("Enter 1 for booking Standard.\n");
            printf("Enter 2 for booking Deluxe.\n");
            printf("Enter 3 for booking Suite.\n");
            scanf("%d",&Room);
            switch (Room)
            {
                case 1:
                    Price = Standard;
                    break;
                case 2:
                    
                    Price = Deluxe;
                    break;
                case 3:
                    Price = Suite;

                    break;
                
                default:
                    printf("Invalid Choice");
            }

        }
            
        else if(Selection == 2){
            
            Standard = 3000, Deluxe = 5000, Suite = 8000;
            Standard = 5000, Deluxe = 8000, Suite = 12000;
            printf("Enter 1 for booking Standard.\n");
            printf("Enter 2 for booking Deluxe. \n");
            printf("Enter 3 for booking Suite.\n");
            scanf("%d",&Room);
            switch (Room)
            {
                case 1:
                    Price = Standard;
                    break;
                case 2:
                    
                    Price = Deluxe;
                    break;
                case 3:
                    Price = Suite;

                    break;
                
                default:
                    printf("Invalid Choice");
            }

        }

    printf("How many nights do you have to stay?\n");
    scanf("%d",&Nights);
    if (Nights > 7){
        Total = Price*Nights*0.85;
    }
    else{
        Total = Price*Nights;

    }
    printf("Your bill is:  %f \n",Total);
    TotalRevenue = TotalRevenue + Total;
}
printf("The hotel revenue after %d Guest is: %f",n, TotalRevenue);
}

    
