#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void Nhap(float p[100], int *n)
{
	printf("Nhap vao n: ");
	scanf("%d", n);
	for(int i=0; i<=*n; i++)
	{
		printf("p[%d]: ", i);
		scanf("%f", &p[i]);
	}
}

void hoocnertongquat(float p[100], float c, int n)
{
	int k;
	float b[100];
	for(int i=0; i<=n; i++)
	{
		b[i]=p[i];
	}
	for(n=k; k>=1; k--)
	{
		for(int i=1; i<=k; i++)
		{
			b[i]=b[i-1]*c+b[i];
		}
	}
	printf("He so cua p(y+%.2f): ", c);
	for(int i=0; i<=n; i++)
	{
		printf("%f: ", b[i]);
	}
}
int main()
{
	float a[100], c;
	int n;
	Nhap(a, &n);
	printf("Nhap vao gia tri cua c: ");
	scanf("%f", &c);
	hoocnertongquat(a, c, n);
	return 0;
}
