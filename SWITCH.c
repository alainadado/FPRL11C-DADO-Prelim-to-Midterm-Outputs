#include<stdio.h>

int main()
{
   int grade;
   
   printf("\n---------- WELCOME! ----------");
   printf("\nEnter your grade value (0-100).");
   
   printf("\nInput grade here: ");
   scanf("%d", &grade);
   
   if(grade>100)
   {
    printf("\nInvalid grade value. Must be 0-100.\n");
   }
   else
   {

   if(grade<=60)
   {
    printf("\nYou get a FAILED grade.\n");
   }
   else
   {

   switch(grade/10)
   {

    case 9 :
        printf("\nYou get a grade of: A.");
        break;

    case 8 :
        printf("\nYou get a grade of: B." );
        break;

    case 7 :
        printf("\nYou get a grade of: C." );
        break;

    case 6 :
        printf("\nYou get a grade of: C." );
        break;
   
   }
 }
   return 0;
} }