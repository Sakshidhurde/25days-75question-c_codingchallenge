#include <math.h>
#include <stdio.h>

int checkPN(int n);
int checkAN(int n);

int main() {
   int n, flag;
   printf("Enter a positive integer: ");
   scanf("%d" , &n);
   
   flag= checkPN(n);
   if (flag == 1)
      printf("%d is a prime number.\n",n);
   else
      printf("%d is not a prime number.\n",n);
      
   flag = checkAN (n);
   if (flag == 1)
      printf("%d is an armstrong number." ,n);
	  
   else
      printf("%d is not an armstrong number.",n);
   return 0;  	    	
}

int checkPN (int n) {
   int i,flag=1 , squareroot;
   squareroot = sqrt(n);
   for (i=2; i <=squareroot; ++i) {

   if( n % i == 0) {
       flag = 0;
       break;
	 }
   }
   return flag;
}

// function to check Armstrong numbeR
int checkAN (int num) {
   int originalnum, remainder,n=0,flag;
   double result = 0.0;
   
   for(originalnum = num; originalnum != 0; originalnum /= 10) {
   	 remainder = originalnum % 10;
   	 
   	 result += pow(remainder,n);	 
   }
   if(round(result) == num)
     flag = 1;
   else
     flag = 0;
   return flag;
}
