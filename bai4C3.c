#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

float tinhgiatrip1(float x)
{
    int q[100],  n;
    float gt1;
    gt1=q[0];
    for(int i=1; i<=n; i++)
    {
      gt1=gt1*x+q[0];
    }
    return gt1;
}

float tinhgiatrip2(float y)
{
    int q[100], n;
    float gt2;
    gt2=q[0];
    for(int i=1; i<=n; i++)
    {
        gt2=gt2*y+q[0];
    }
    return gt2;
}

float tinhtong2giatri(float tong)
{
    float tong;
    float a, b;
    tong=tinhgiatrip1(a)+tinhgiatrip2(b);
    float tong;
}


int main()
{
    int n;
    float a, b, p, x[100];
    printf("Nhap vao bac cua ham: ");
    scanf("%d", &n);
    printf("Nhap vao cac he so cua ham: ");
    for(int i=0; i<=n; i++)
    {
        scanf("%f", &x[i]);
    }

}