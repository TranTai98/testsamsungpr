#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
void nhapmang(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("p-[%d]=",i);
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
int ktcpcmax(int *p,int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1 && *(p+i)%2==0)
	{
		max=*(p+i);
		break;
	}
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1 && *(p+i)%2==0 && *(p+i)>max)
		max=*(p+i);
	return max;
}
void cacvtrimaxcpc(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	if(*(p+i)==ktcpcmax(p,n))
	printf("%5d",i);
}
main()
{
	int *a,n,i,max;
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
	if(ktcpcmax(a,n)==0)
	printf("mang ko co so cp");
	else
	{
	printf("xuat so cp chan max: ");
	cacvtrimaxcpc(a,n);
	}
	getch();
}