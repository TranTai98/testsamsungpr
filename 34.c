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
int ktntdt(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1)
		return *(p+i);
}
void ChenX(int *p, int *n, int x, int k)                               
{  
	for(int i=*n;i>k;i--)                                           
				*(p+i) = *(p+i-1);                                                        
  		*(p+k)=x;                                                           
		(*n)++;                                                      
}
void chenntdt_k( int *p, int *n,int m, int k)
{
	 m=ktntdt(p,*n);
	ChenX(p,n,m,k);
}
main()
{
	int *a,n,m,k;
	printf ("hay nhap kich thuoc mang :");
	scanf ("%d",&n);
	a = (int *) malloc (n*sizeof(int));
	nhapmang(a,n);
	xuatmang(a,n);
	do
{
	printf("\n Moi nhap vi tri chen k= ");
	scanf("%d",&k);
}
	while (k<0||k>n);
	chenntdt_k(a,&n,m,k);
	printf ("\n mang vua chen vao vi tri k= %d la : \n",k);
	xuatmang(a,n);
	getch();
}


