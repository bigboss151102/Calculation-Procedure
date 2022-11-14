#include<stdio.h>
#include<conio.h>
#include<math.h>

void Nhap(float p[100], int *k)
{
	printf("Nhap vao bac cua ham p:");
	scanf("%d", k);
	for(int i=0; i<=*k; i++)
	{
		printf("p[%d]: ",i);
		scanf("%f", &p[i]);
	}
}

float Tong(float x[100], int n, int k)
{
	float p;
	p=x[0];
	for(int i=1; i<=n; i++)
	{
		p=p*k+x[i];
	}
	return p;
}

int main()
{
	int n;
	float a, b, A[100];
	printf("Nhap vao ham p: \n");
	Nhap(A, &n);
	printf("Nhap vao gia tri cua a: ");
	scanf("%f", &a);
	printf("Nhap vao gia tri cua b: ");
	scanf("%f", &b);
	printf("Gia tri cua ham la: %.4f", Tong(A, n, a)+Tong(A, n, b));
	return 0;
}
