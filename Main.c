#include <stdlib.h>
#include<string.h>
#include <stdio.h>
#include "Bucket.h"
#define NUMBUCKS 8

int main(void)
{
	struct bucket list[NUMBUCKS] =
	{
			'a','b',0,NULL,
			'c','c',0,NULL,
			'd','f',0,NULL,
			'g','k',0,NULL,
			'l','o',0,NULL,
			'p','r',0,NULL,
			's','s',0,NULL,
			't','z',0,NULL
	};

	char input[50];

	int ctr0 = 0;
	int ctr1 = 0;
	int ctr2 = 0;
	int ctr3 = 0;
	int ctr4 = 0;
	int ctr5 = 0;
	int ctr6 = 0;
	int ctr7 = 0;

	while (fgets(input, 50, stdin) != NULL)
	//for (int i = 0; i < 5; i++) //used to test before
	{

		//fgets(input, 50, stdin);
		int x = check(input);

		switch (x)
		{

		case 0:
			printf("Inputted!\n\n");
			ctr0++;
			Insert(&list[0], ctr0, input);
			break;
		case 1:
			printf("Inputted!\n\n");
			ctr1++;
			Insert(&list[1], ctr1, input);
			break;
		case 2:
			printf("Inputted!\n\n");
			ctr2++;
			Insert(&list[2], ctr2, input);
			break;
		case 3:
			printf("Inputted!\n\n");
			ctr3++;
			Insert(&list[3], ctr3, input);
			break;
		case 4:
			printf("Inputted!\n\n");
			ctr4++;
			Insert(&list[4], ctr4, input);
			break;
		case 5:
			printf("Inputted!\n\n");
			ctr5++;
			Insert(&list[5], ctr5, input);
			break;
		case 6:
			printf("Inputted!\n\n");
			ctr6++;
			Insert(&list[6], ctr6, input);
			break;
		case 7:
			printf("Inputted!\n\n");
			ctr7++;
			Insert(&list[7], ctr7, input);
			break;
		}
	}
	printf("Ordered Output: \n");
	for (int i = 0; i < 8; i++)
	{
		if (list[i].numWords > 0)
		{
			Sort(&list[i]);
			printOut(&list[i]);
		}
	}
}

