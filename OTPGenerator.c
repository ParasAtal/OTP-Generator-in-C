#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int number;
    int choice;
    printf("\tTHIS PROGRAM GENERATES A RANDOM 4 DIGIT,5DIGIT,6 DIGIT ONE TIME PASSWORD WHICH IS USER DEFINED\n");
    printf("\n\n\n");
    printf("ENTER 4,5 OR 6 TO GENERATE A ONE TIME PASSWORD\n");
   
    scanf("%d",&choice);
    if(choice==4){
         printf("\n\n\n");
        printf("The four digit otp is:");
         srand(time(NULL));
   number=rand()%10000;
   
   printf("\n%d",number);
   
    }
    else if (choice ==5){
         printf("\n\n\n");
        printf("The five digit otp is:");
         srand(time(NULL));
   number=rand()%100000;
    
   printf("\n%d",number);
   
    }
    else if(choice==6){
         printf("\n\n\n");
        printf("The six digit otp is:");
         srand(time(NULL));
   number=rand()%1000000;
   
   printf("\n%d",number);
   
        
    }
    else{
        printf("\n INVALID CHOICE");
    }
   
    return 0;
}