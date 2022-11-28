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
		printf("%d",*(p+i));
		printf("\n");
	}
}
int ktcp(int n)
{
	int i;
	for(i=1;i<=n;i++)
	if(i*i==n)
		return 1;
	return 0;
}
int TBCcp(int *p,int n)
{
	int i,dem=0;
	int T=0;
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1)
	{
		dem++;
		T=T+(*(p+i));
	}
	return T/dem;	
}
main()
{
	int *a,n,i;
	do
	{
		printf("nhap n:");
		scanf("%d",&n);
	}
	while(n<1||n>50);
	a=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	if(TBCcp(a,n)==0)
	printf("mang ko co so chinh phuong ");
	else
	{
	printf("TBC cac so chinh phuong la: %d",TBCcp(a,n));
	}
	getch();
}