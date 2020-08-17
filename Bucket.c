#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Bucket.h"
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

int check(char d[50])
{
	char first = d[0];
	int a = (int)first;

	if (a == 97 || a == 98)
	{
		return 0;
	}
	else if (a == 99)
	{
		return 1;
	}
	else if (a >= 100 && a <= 102)
	{
		return 2;
	}
	else if (a >= 103 && a <= 107)
	{
		return 3;
	}
	else if (a >= 108 && a <= 111)
	{
		return 4;
	}
	else if (a >= 112 && a <= 114)
	{
		return 5;
	}
	else if (a == 115)
	{
		return 6;
	}
	else if(a>=116&&a<=122)
	{ 
		return 7;
	}
}

void Insert(bucket* b, int ctr, char* c)
{
	node* n = (node*)malloc(sizeof(node));

	char* aWord = (char*)malloc(strlen(c) + 1);
	strcpy(aWord, c);

	b->numWords = ctr;
	n->string = aWord;

	n->next = b->chainHead;
	b->chainHead = n;

}

void Sort(bucket *b)
{
	node* l;
	node* r = NULL;
	int swapped;
	do
	{
		swapped = 0;
		l = b->chainHead;
		while (l->next != r)
		{
			if (strcmp(l->string, l->next->string) > 0)
			{
				swap(l, l->next);
				swapped = 1;
			}
			l = l->next;

		}
		r = l;
	} while (swapped);
	
}

void swap(node* a, node* b)
{
	char* x = b->string;
	char* y = a->string;

	b->string = y;
	a->string = x;
}
void printOut(bucket* b)
{
	while (b->chainHead!= NULL)
	{
		printf("%s\n", b->chainHead->string);
		b->chainHead = b->chainHead->next;
	}
}

