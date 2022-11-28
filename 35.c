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

int ktntcc(int *p,int n)
{
	int i;
	for(i=n;i>=0;i--)
		if(ktnt(*(p+i))==1)
			return *(p+i);
	return 0;
}

int minmang(int *p,int n)
{
	int i,min=*p,vtmin=0;
	for(i=0;i<n;i++)
	{
		if(*(p+i)<min)
		{
			min=*(p+i);
			vtmin=i;
			break;
		}
	}
	return vtmin;
	
}
void ChenX(int *p, int *n, int x, int k)                               
{  
	for(int i=*n;i>k;i--)                                           
				*(p+i) = *(p+i-1);                                                        
  		*(p+k)=x;                                                           
		(*n)++;                                                      
}
void chenntccvmin( int *p, int *n,int m, int k)
{
	 m=ktntcc(p,*n);
	 k=minmang(p,*n);
	 ChenX(p,n,m,k);
}
main()
{
	int *a,n,m,k;
	printf ("hay nhap kich thuoc mang :");
	scanf ("%d",&n);
	a=(int *) malloc (n*sizeof(int));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	printf("\nGia tri min dau tien: %d\n",minmang(a,n));
	printf("\nGia tri nguyen to cuoi cung: %d\n",ktntcc(a,n));
	chenntccvmin(a,&n,m,k);
	printf ("\n mang vua chen vao vi tri k la : \n");
	xuatmang(a,n);
	getch();
}