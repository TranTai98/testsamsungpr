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
int ktcp(int n)
{
	int i;
	for(i=1;i<=n;i++)
	if(i*i==n)
		return 1;
	return 0;
}
void xoa(int *p,int *n,int x)
{
	int i;
	for(i=x;i<(*n)-1;i++)
	*(p+i)=*(p+i+1);
	(*n)--;	
}
void xoacp(int *p,int *n)
{
	int i;
	for(i=0;i<(*n);i++)
		if(ktcp(*(p+i))==1)
		{
		xoa(p,n,i);
		i--;
		}
}
main()
{
	int *a,n;
	printf("nhap n:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	xoacp(a,&n);
	printf("mang vua xoa cac so chinh phuong la:");
	xuatmang(a,n);
	getch();	
}