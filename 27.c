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
void sxntknt(int *p,int n)
{
	int i,j,tg;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
	if(ktnt(*(p+i))==0 && ktnt(*(p+j))==1)
	{
		tg=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tg;
	}
	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
	if(ktnt(*(p+i))==1 && ktnt(*(p+j))==1 && (*(p+i))<(*(p+j)))
	{
		tg=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tg;	
	}
	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
	if(ktnt(*(p+i))==0 && ktnt(*(p+j))==0 && (*(p+i))>(*(p+j)))
	{
		tg=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tg;	
	}
	}
}
main()
{
	int *a,n,i;
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
	sxntknt(a,n);
	printf("mang sau khi sx nt ve dau giam dan,ko nt ve sau tang dan: ");
	xuatmang(a,n);
	getch();
}

