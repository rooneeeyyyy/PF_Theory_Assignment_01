/*Question 03
Class Result Processing
*/
#include<stdio.h>
int main(){
    int N, Subject1, Subject2, Subject3, Subject4, Subject5, sum;
    float Avg;
    Avg = 0;
    sum = 0;
    int Distinction = 0, Pass = 0, Fail = 0;
    printf("Enter the number of students: \n");
    scanf("%d", &N);


    while (N >= 1)
    {
        N--;
        printf("Enter the marks for subject #1: \n");
        scanf("%d",&Subject1);
        printf("Enter the marks for subject #2: \n");
        scanf("%d",&Subject2);
        printf("Enter the marks for subject #3: \n");
        scanf("%d",&Subject3);
        printf("Enter the marks for subject #4: \n");
        scanf("%d",&Subject4);
        printf("Enter the marks for subject #5: \n");
        scanf("%d",&Subject5);
        if (Subject1 <= 33 || Subject2 <= 33 || Subject3 <= 33 || Subject4 <= 33 || Subject5 <= 33)
        {
            printf("Fail -- Subject Deficiency\n");
            Fail++;
        }
        else
        {
            sum = Subject1 + Subject2 + Subject3 + Subject4 + Subject5;
            Avg = sum / 5;

            if(Avg >= 80)
            {
                printf("Distinction\n");
                Distinction = Distinction + 1;
            }
            else if(Avg >= 60 && Avg < 80)
            {
                printf("Pass\n");
                Pass++;
            }
            else
            {
                printf("Fail\n");
                Fail++;
            }
        }
    }
    
    printf("Total number of students Who got Distinction: %d \n",Distinction);
    printf("Total Number of students who passed: %d \n", Pass);
    printf("Total number of student who failed: %d \n", Fail);
}