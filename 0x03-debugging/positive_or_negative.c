#include "main.h"
/**
 *positive_or_negative-function check integer sign value
 *@i:parameter check integer
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d id positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}

