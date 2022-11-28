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
void tachmang(int *p,int n,int *b,int *nb,int *c,int *nc)
{
	int i,n1=0,n2=0;
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2==0)
		{
			*(b+n1)=*(p+i);
			n1++;
		}
		if(*(p+i)%2==1)
		{
			*(c+n2)=*(p+i);
			n2++;
		}
	}
	*nb=n1;
	*nc=n2;	
}
int main()
{
	int *a,n,*b,nb,*c,nc;
	do
	{
		printf("nhap n:");
		scanf("%d",&n);
	}
	while(n<0||n>50);
	a=(int )malloc(n*sizeof(int *));
	b=(int )malloc(n*sizeof(int *));
	c=(int )malloc(n*sizeof(int *));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	printf("mang sau khi tach la:");
	tachmang(a,n,b,&nb,c,&nc);
	printf("mang toan so chan la:");
	xuatmang(b,nb);
	printf("mang toan so le la:");
	xuatmang(c,nc);
	getch();	
}