#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

double hamcos(double x)
{
	double q, t, k;
	q=0;
	t=1;
	k=0;
	while(abs(t) > 0.000001)
	{
		q=q+t;
		k=k+2;
		t*=(-(x*x)/k*(k-1));
	}
	return q;
}

int main()
{
	float a, b;
	printf("Nhap vao gia tri cua a: ");
	scanf("%f", &a);
	b=hamcos(a);
	printf("Gia tri cua cos %.2f la: %f",a, b);
	return 0;
}
