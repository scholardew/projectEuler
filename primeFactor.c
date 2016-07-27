#include <stdio.h>
#include <math.h>

/*What is the largest prime factor of the number 600851475143?
*/


int main()
{
	long integer;
	integer = 600851475143;
	long maxPrime, num;
    num = 3;
	while(integer !=0){
		if(integer % num != 0)
			num+=2;
		else{
			maxPrime = integer;
			integer/=num;
			if(integer == 1){
				printf("%ld is the largest prime factor\n", maxPrime);
				integer = 0;
			}//end if
		}//end else
	}//end while
	return 0;
}

