#include <stdio.h>
#include <string.h>
int main() {
   
     int number;
     char choice[10];

     do{
      printf("Enter any number:");
     scanf("%d", &number);

     if(number % 2 == 0){
        printf("%d even number!", number);


     }else{
        printf("%d odd number!", number);



     }
     
     printf("\nDo u want to check another number? (yes/no:)");
     scanf("%s", choice);
      


     }while (strcmp(choice, "yes") ==0);
     printf("thank u for using this program");
     
      
    
     



      
    




    return 0;
}