#include<stdio.h>
int main(void)
{
   double userValue,convertedValue;
    int userChoice=0;

    printf("Press 1 to Convert Bits to Tera Bytes\nPress 2 to Convert Tera Bytes to Bits \nEnter your choice : ");
    scanf("%d", &userChoice);
    if(userChoice==1)
    {
        printf("Enter Bits : ");
        scanf("%lf",&userValue);
        convertedValue=userValue/8000000000000.0;  // 1 tb = 8,000,000,000,000 (rounded standard 1kb=1000 bytes is used)
        printf("\n Tera Bytes = %lf",convertedValue ); // 1 tb =  8,796,093,000,000 if we use 1 kb=1024 bytes format
    }
    else if (userChoice==2)
    {
        printf("Enter TeraBytes : ");
        scanf("%lf",&userValue);
        convertedValue=userValue*8000000000000; //Converting in bits // standard 1kb = 8,000,000,000,000 is used
         printf("\n Bits = %lf",convertedValue);
    }
    else
    {
        printf("You Entered a Wrong value.\n Program Terminated ");
    }

    return 0;

}
