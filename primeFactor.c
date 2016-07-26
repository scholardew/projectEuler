#include <stdio.h>
#include <math.h>

/*What is the largest prime factor of the number 600851475143?
*/

int isFactor(int);
int isPrime(int);

int main()
{
	long maxNum = 600851475143;
	int check;
	int i, largestActualPrime, checkPrime;
	i = 3;
	while(i < (maxNum/2))
	{
		check = isFactor(i);
		if(check == 0)
		{
			checkPrime = isPrime(i);
			if(checkPrime == 0)
			{	largestActualPrime = i;
				printf("%d\n",largestActualPrime);
			}
			i+=2;
		}
		else
			i+=2;
	}

	printf("The largest prime factor is %d\n ", largestActualPrime);
	return 0;
}

int isFactor(int x)
{
	long maxNum = 600851475143;
	int remainder;
	remainder = maxNum % x;
	if (remainder > 0)
		return 1; //not a factor
	else
		return 0; //is a factor
}

int isPrime(int y)
{
	int remainder;
	int i;

	if (y == 3)
		return 0; //it is prime

	for(i = 3; i < y; i+=2)
	{
		remainder = y % i;
		if(remainder == 0)
			return 1;
		
	}

	return 0;
}//end isPrime








