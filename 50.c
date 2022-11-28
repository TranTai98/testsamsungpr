#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
int ktcp(int n)
{
	int i;
	for(i=1;i<=n;i++)
	if(i*i==n)
		return 1;
	return 0;
}
int maxcpc(int *p,int n)
{
	int i,max=-1;
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1 && (*(p+i)%2==0))
	{
		max=*(p+i);
		break;
	}
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1 && (*(p+i)%2)==0 && *(p+i)>max)
		max=*(p+i);
	return max;
}
void xoa(int *p,int *n,int vt)
{
	int i;
	for(i=vt;i<*n-1;i++)
	*(p+i)=*(p+i+1);
	(*n)--;
}
void xoamaxcp(int *p,int *n)
{
	int i;
	for(i=0;i<*n;i++)
	if(maxcpc(p,*n)==*(p+i))
	{
		xoa(p,n,i);
		i--;
	}
}
main()
{
	int *a,n,gt;
	printf("nhap n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	gt=maxcpc(a,n);
	if(gt==-1)
	printf("mang ko co so cp");
	else
	{
		xoamaxcp(a,&n);
		printf("mang vua xoa so am max xp:");
		xuatmang(a,n);
	}
	getch();	
}