#include<stdio.h>
#include<conio.h>
#include<math.h>
float Nhap(float p[100], int *k)
{
	printf("Nhap vao bac cua ham: ");
	scanf("%d", k);
	printf("Nhap vao cac he so cua ham: \n");
	for(int i=0; i<=*k; i++)
	{
		printf("p[%d]= ",i);
		scanf("%f", &p[i]);
	}
}

float Tong(float heso[], int n, float c)
{
	float p;
	p=heso[0];
	for(int i=1; i<=n; i++)
	p=p*c+heso[i];
	return p;
}
int main()
{
	int m, n;
	float c, d, a[100], b[100];
	printf("Nhap ham pn: \n");
	Nhap(a,&n);
	printf("Nhap ham pm: \n");
	Nhap(b,&m);
	printf("Nhap vao gia tri cua c: ");
	scanf("%f", &c);
	printf("Nhap vao gia tri cua d: ");
	scanf("%f", &d);
	printf("Gia tri cua da thuc pn la: %.4f",Tong(a,n,c)+Tong(b,m,c));
	printf("\n");
	printf("Gia tri cua da thuc pm la: %.4f",Tong(a,n,c)+Tong(b,m,d));
	printf("\n");
	return 0;
}






