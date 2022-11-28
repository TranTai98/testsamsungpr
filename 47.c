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
	int i,dem=0;
	for(i=1;i<=n;i++)
	if(n%i==0)
		dem++;
	if(dem==2)
		return 1;
	return 0;
}
void xoa(int *p,int *n,int vt)
{
	int i;
	for(i=vt;i<*n-1;i++)
	*(p+i)=*(p+i+1);
	(*n)--;	
}
void xoantn(int *p,int *n)
{
	int i;
	for(i=0;i<*n;i++)
	if(ktnt(*(p+i))==1 && *(p+i)%1==0)
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
	xoantn(a,&n);
	printf("mang vua xoa nguyen to la:");
	xuatmang(a,n);
	getch();
}