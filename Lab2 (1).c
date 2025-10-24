#include <stdio.h>
int main()
{
 int choice;
 int input_ID ;
 int PAN_NUMBER = 111;
 int AADHAR_ID = 222 ;
 int APAAR_ID = 333;
 int DRIVING_LICENSE = 444;
 int PASSPORT = 555;
 printf("_____KYC VERIFICATION SYSTEM____ \n");
 printf("Select the type of ID to verify: \n");
 printf("1.PAN NUMBER \n");
 printf("2.AADHAR NUMBER \n");
 printf("3.APAAR ID \n");
 printf("4.DRIVING LICENSE \n");
 printf("5.PASSPORT \n");
 printf("Enter your choice (1-5) : \n");
 scanf("%d",& choice);
 printf("Enter the unique identification number : ");
 scanf("%d",& input_ID);
 switch (choice)
 {
   case 1:
   if (input_ID == PAN_NUMBER)
       printf(" PAN verified \n");
   else
       printf(" PAN Not Verified \n")  ;
   break;
   case 2:
   if (input_ID == AADHAR_ID)
       printf("AADHAR Verified \n");
   else
       printf(" AADHAR Not Verified \n") ;
   break;    
   case 3:
   if (input_ID == APAAR_ID)   
       printf("APAAR Verified");
   else
       printf("APAAR Not Verified")   ;
   break;    
   case 4:
   if (input_ID == DRIVING_LICENSE)
       printf("DRIVING LICENSE Verified");
   else
       printf("DRIVING LICENSE Not Verified");
   break;     
   case 5:
   if (input_ID == PASSPORT)
       printf("PASSPORT Verified ");
   else
       printf("PASSPORT Not Verified");
   break;        
   default:
      printf("Invalid choice choose valid option(1-5)!!!! \n");
      

 }
 return 0;
 
 
}
    