#define N 70
typedef struct _Data
{
	int k1,k2;
	float t1,t2;
}stuData;

#ifndef twj_h
#define twj_h


int input(stuData s[]);
void Beita(stuData s[],float beita[],int count);
void print(float beita[],int count);

#endif
