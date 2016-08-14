#include <stdio.h>
#define MAX 998001 //largest number possible through
                   //multiplying 999*999

/* Find the largest palindrome made from the product of
 * two 3-digit numbers
 */

int main() 
{
	int int1 = 900;  //assumed there are palindromes starting with 900
	int int2 = 900;
	int product = int1*int2;
	int digArray [6];  //array for storing the product
	int i; //for loop variable
	int answer;  //holds all palindrome products
	int tempProd;  //holds the product of 2 ints

	while(product < MAX)
	{
		tempProd = product;
		while(product > 0) //fills array with single digits from product
		{
			for(i = 0; i < 6; i++)
			{
				digArray[i] = product % 10;
				product /= 10;
			}
		}
		
		//checks if product is a palindrome
		if(digArray[0] == digArray[5] && digArray[1] == digArray[4] &&
				digArray[2] == digArray[3])
		{
			answer = tempProd;
			printf("%d, ", answer);
		}

		int2++; //increase one of the 3 digit numbers

		if(int2 > 999) //start again once int2 reaches 999 and increment int1 by 1
		{
			int1++;
			int2 = 900;
		}
		product = int1 * int2;
	}//end while

	return 0;
}//end main
			
			


