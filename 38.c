#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
void nhapmang(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("p[%d]",i);
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
int mincp(int *p,int n)
{
	int i,min;
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1)
	{
		min=*(p+i);
		break;	
	}
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1 && min>*(p+i))
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
void chenmincp(int *p,int *n,int m,int k)
{
	m=mincp(p,*n);
	k=*n;
	chenx(p,n,m,k);
}
main()
{
	int *a,n,m,k;
	printf("nhap n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	chenmincp(a,&n,m,k);
	printf("mang vua chen la:");
	xuatmang(a,n);
	getch();
}