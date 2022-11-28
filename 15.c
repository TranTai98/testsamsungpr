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
		printf("%d",*(p+i));
		printf("\n");
	}	
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
int demntn(int *p,int n)
{
	int i,dem=0;
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1 && *(p+i)%1==0)
	{
		dem++;	
	}
	return dem;
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
	printf("dem cac so ntn: %d",demntn(a,n));
	getch();
}
