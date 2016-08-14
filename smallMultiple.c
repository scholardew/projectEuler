#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num =20;
	int answer = 0;
	bool found;
	found = false;

	while(!found)
	{
		int remainder;
		remainder = 0;
		int j = 0;
		while(remainder == 0)
		{
			j++;
			remainder = num % j;
			if (j == 20 && remainder == 0)
			{
				answer = num;
				remainder = 1;
			}//end if
		}//end while

		if (answer == 0)
			num+=20;
		else
		{
			printf("%d is the answer\n", answer);
			found = true;
		}
	}//end while
	return 0;
}//end main

