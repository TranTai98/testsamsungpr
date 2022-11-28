#include<conio.h>
#include<stdio.h>
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
void tachnt(int *p,int np,int *b,int *nb,int *c,int *nc)
{
	int i,n1=0,n2=0;
	for(i=0;i<np;i++)
	{
	if(ktnt(*(p+i))==1)
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
	printf("tach thanh 2 mag nt va knt la:");
	tachnt(a,n,b,&nb,c,&nc);
	printf("mang cac phan tu nt:");
	xuatmang(b,nb);
	printf("mang cac phan  tu knt:");
	xuatmang(c,nc);
	getch();
}