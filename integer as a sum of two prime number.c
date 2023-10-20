#include <stdio.h>
int checkprime(int n);
int main() {
  int n, i, flag = 0;
  printf("Enter a positive integer:");
  scanf("%d", &n);
  
  for(i=2 ; i <= n/ 2; ++i) {
  	if (checkprime (i) == 1) {
  	  if (checkprime(n-1)==1) {
  	  	printf("%d = %d + %d\n",n,i,n-i);
  	  	flag = 1;
		}	
	  }
   }
   
   if (flag == 0)
   	 printf("%d cannot be expressed as the sum of two prime numbers.",n);
    return 0;
}

int checkprime(int n) {
  int i, isprime= 1;
  
  if(n==0 || n==1) {
  	isprime = 0;
  }	
  else {
  	for(i=2; i <= n/2; ++i) {
  	  if(n % i == 0 ) {
  	    isprime = 0;
  	    break;
	   }	
	}
  }
  
  return isprime;
}
