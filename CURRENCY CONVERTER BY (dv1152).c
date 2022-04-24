/* CURRENCY CONVERTER*/
#include <stdio.h>

int main()
{
    float dollar,inr,rupees;
    int ch;
    do{
        printf("\n** WELCOME TO DUCKLINK CURRENCY CONVERTER **\n");
        printf("\n 1.Rupees -> Dollar");
        printf("\n 2.Dollar -> Rupees");
        printf("\n 3.Pound -> Rupees");
        printf("\n 4.Euro -> Rupees");
        printf("\n 5.Exit");
        printf("\n\nEnter Your Choice : ");
        
        scanf("%d",&ch);
       
        switch(ch){
           
            case 1:printf("\nEnter the currency in Rupees : ");
            scanf("%f",&rupees);
            dollar=rupees/76.5;
            printf("\n The currency in Dollar is : %.2f\n",dollar);
            break;
           
            case 2:printf("\nEnter the currency in Dollar : ");
            scanf("%f",&rupees);
            inr=rupees*76.5;
            printf("\n The currency in Rupees is : %.2f\n",inr);
            break;
            
            case 3:("\n Enter the currency in Pound : ");
            scanf("%f",&rupees);
            inr=rupees*98.20;
            printf("\n The currency in rupees is : %.2f\n",inr);
            break;
            
            case 4:printf("\nEnter the currency in Euro : ");
            scanf("%f",&rupees);
            inr=rupees*82.75;
            printf("\n The currency in rupees is : %.2f\n",inr);
            break;
            
            case 5:printf("Exit");
            break;
        
        }
    }
while(ch<4);

    return 0;
}