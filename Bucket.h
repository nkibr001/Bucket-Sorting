#ifndef BUCKET_H_
#define BUCKET_H_

typedef struct bucket
{
	int minInitial;
	int maxInitial;
	int numWords;
	struct node* chainHead;
}bucket;

typedef struct node
{
	char* string;
	struct node* next;
}node;

int check(char c[50]);
void printOut(bucket* b);
void Insert(bucket* b, int ctr, char* c);
void Sort(bucket* b);
void swap(node* a, node* b);
#endif /* BUCKET_H_ */
