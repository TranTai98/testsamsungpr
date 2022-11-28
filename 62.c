#include<conio.h>
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
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
void tachmang(int *p,int n,int *b,int *nb,int *c,int *nc)
{
	int i,n1=0,n2=0;
	for(i=0;i<n;i++)
	{
		if(ktcp(*(p+i))==1)
		{
			*(b+n1)=*(p+i);
			n1++;
		}
		else
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
	a=(int *)malloc(n*sizeof(int ));
	b=(int *)malloc(n*sizeof(int ));
	c=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	printf("mang sau khi tach : \n");
	tachmang(a,n,b,&nb,c,&nc);
	printf("mang toan so cp la:");
	xuatmang(b,nb);
	printf("mang ko co so cp la:");
	xuatmang(c,nc);
	getch();
}