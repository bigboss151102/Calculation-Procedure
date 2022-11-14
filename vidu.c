#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,n;
    float c, p, a[100];
    printf("Nhap vao bac da thuc !");
    scanf("%d", &n);
    printf("Nhap vao cac he so cua phuong trinh !");
    for(int i=0; i<=n; i++)
    {
        scanf("%f", &a[i]);
    }
    printf("Nhap vao gia tri can tinh ?");
    scanf("%f", &c);
    p=a[0];
    for(int i=1; i<=n; i++)
    {
        p=p*c+a[i];
    }
    printf("Gia tri cua da thuc: %.3f/n", p);
    return 0;
}