# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
#include<malloc.h>
void Nhapmang(int *a,int n)
{
	int i;
	printf("\n nhap cac pan tu mang");
	for(i=0;i<n;i++)
	{
		printf("a%d=",i);
		scanf("%d",a+i);
	}
}
void Xuatmang(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("\t %d",*(a+i));
}
int maxmang(int *p,int n)
{
int i,max;
max= *p;
for(i=1; i<n; i++)
		if(*(p+i)>max)
			max = *(p+i);
return max;
}
//Hàm chèn s? x vào v? trí b?t k? k	
void ChenX(int *a, int *n, int x, int k)                               
{  
	for(int i=*n; i>k;i--)                                           
			*(a+i) = *(a+i-1);                                                        
  		*(a+k) = x;                                                           
		(*n)++;                                                      
}
//	Hàm chèn s? x b?t k? sau s? l?n nh?t c?a m?ng
void chensaumaxdautien(int *a, int *n,int x)
{	
int i;
int k= maxmang(a,*n);
for(i=0;i<*n;i++)     
if(*(a+i)==k)
{
ChenX(a,n,x,i+1);
break;
}
}
main()
{
	int *a,n,x,k;
	printf ("hay nhap kich thuoc mang :");
	scanf ("%d",&n);
	a = (int *) malloc (n*sizeof(int));
	Nhapmang(a,n);
	printf("mang vua nhap la:");
	Xuatmang(a,n);
	printf ("\n Hay nhap so can chen x=  :");
	scanf ("%d",&x);
	chensaumaxdautien(a,&n,x);
	printf ("\n mang vua chen vao vi tri k= %d la : \n",k);
	Xuatmang(a,n);
}
