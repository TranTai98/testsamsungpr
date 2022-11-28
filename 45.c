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
void xoa(int *p,int *n,int vt)
{
	int i;
	for(i=vt;i<*n-1;i++)
	*(p+i)=*(p+i+1);
	(*n)--;	
}
void xoaam(int *p,int *n)
{
	int i;
	for(i=0;i<*n;i++)
	if(*(p+i)<0)
	{
		xoa(p,n,i);
		i--;	
	}
}
main()
{
	int *a,n;
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
	xoaam(a,&n);
	printf("mang vua xoa cac phan tu am la:");
	xuatmang(a,n);
	getch();
}
