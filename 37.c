#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
void nhapmang(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("p[%d]=",i);
		scanf("%d",(p+i));
	}
}
void xuatmang(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%5d",*(p+i));
	}
	printf("\n");
}
int ktnt(int n)
{
	int i,dem;
	for(i=1;i<=n;i++)
	if(n%i==0)
		dem++;
	if(dem==2)
		return 1;
	return 0;	
}
int ktntmin(int *p,int n)
{
	int i,min;
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1)
	{
		min=*(p+i);
		break;
	}
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1 && *(p+i)<min)
		min=*(p+i);
	return min;
}
void chenx(int *p,int *n,int x,int k)
{
	int i;
	for(i=*n;i>k;i--)
		*(p+i)=*(p+i-1);
	*(p+k)=x;
	(*n)++;
}
void chenmin(int *p,int *n,int m,int k)
{
	m=ktntmin(p,*n);
	chenx(p,n,m,k);
}
main()
{
	int *a,m,k,n;
	printf("nhap n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	do
	{
		printf("nhap k:");
		scanf("%d",&k);
	}
	while(k<0||k>n);
	chenmin(a,&n,m,k);
	printf("chen min nt vao k");
	xuatmang(a,n);
	getch();
}
