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
int maxnt(int *p,int n)
{
	int i,max;
	for(i=0;i<n;i++)
		if(ktnt(*(p+i))==1)
		{
			max=*(p+i);
			break;
		}
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1 && *(p+i)>max)
		max=*(p+i);
	return max;
}
void chenx(int *p,int *n,int x,int k)
{
	int i;
	for(i=*n;i>k;i--)
	*(p+i)=*(p+i-1);
	*(p+k)=x;
	(*n)++;
}
void chenvtdt(int *p,int *n,int m,int k)
{
	m=maxnt(p,*n);
	k=0;
	chenx(p,n,m,0);
}
main()
{
	int *a,n,m,k;
	do
	{
		printf("nhap n:");
		scanf("%d",&n);
	}
	while(n<0||n>50);
	a=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	chenvtdt(a,&n,m,k);
	printf("\n chen max nt vao vi tri dau tien la: \n");
	xuatmang(a,n);
	getch();
}
