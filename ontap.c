#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
void nhapmang(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("p[%d]",i);
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
	for(i=0;i<=n;i++)
	if(i*i==n)
		return 1;
	return 0;
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
int maxcpc(int *p,int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1 && *(p+i)%2==0)
	{
		max=*(p+i);
		break;
	}
	for(i=0;i<n;i++)
	if(ktcp(*(p+i))==1 && *(p+i)%2==0 && *(p+i)>max)
		max=*(p+i);
	return max;
}
void vtcpcmax(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	if(*(p+i)==maxcpc(p,n))
	printf("%5d",i);
}
void cpcmaxcc(int *p,int n)
{
	int i;
	for(i=n;i>0;i--)
	if(*(p+i)==maxcpc(p,n))
	{
		printf("%d",i);
		break;
	}	
}
int ktntmax(int *p,int n)
{
	int i,max=0;
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
int ntledt(int *p,int n)
{
	int i,vt=-1;
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1 &&*(p+i)%2==1)
	{
		vt=i;
		break;	
	}
	return vt;	
}
void vtntmax(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	if(*(p+i)==ktntmax(p,n))
	printf("%5d",i);
}
int demntmax(int *p,int n)
{
	int i,dem=0;
	for(i=0;i<n;i++)
	if(*(p+i)==ktntmax(p,n))
	{
		dem++;
	}
	return dem;	
}
int tongnt(int *p,int n)
{
	int i,dem=0,T=0;
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1)
	{
		dem++;
		T=T+ *(p+i);	
	}
	return T/dem;
}
void sxntkont(int *p,int n)
{
	int i,j,tg;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(ktnt(*(p+i))==0 && ktnt (*(p+j))==1)
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
int ktntdt(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	if(ktnt(*(p+i))==1)
	return *(p+i);
}

void chenx(int *p,int *n,int x,int k)
{
	int i;
	for(i=*n;i>k;i--)
	*(p+i)=*(p+i-1);
	*(p+k)=x;
	(*n)++;
}
void chendtvk(int *p,int *n,int m,int k )
{
	m=ktntdt(p,*n);
	chenx(p,n,m,k);
}
int ntcc(int *p,int n)
{
	int i;
	for(i=n;i>0;i--)
	if(ktnt(*(p+i))==1)
	return *(p+i);
}
int mindt(int *p,int n)
{
	int i,min=*p,vt=0;
	for(i=0;i<n;i++)
	if(*(p+i)<min)
	{
		min=*(p+i);
		vt=i;
		break;	
	}
	return vt;
}
void chenntccvmindt(int *p,int *n,int m,int k)
{
	m=ntcc(p,*n);
	k=mindt(p,*n);
	chenx(p,n,m,k);
}
void xoa(int *p,int *n,int k)
{
	int i;
	for(i=k;i<*n-1;i++)
	*(p+i)=*(p+i+1);
	(*n)--;
}
void xoax(int *p,int *n,int x)
{
	int i;
	for(i=0;i<*n;i++)
	if(*(p+i)<x)
	{
		xoa(p,n,i);
		i--;
	}
}
void tachntkont(int *p,int n,int *b,int *nb,int *c,int *nc)
{
	int i,n1=0,n2=0;
	for(i=0;i<n;i++)
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
	*nb=n1;
	*nc=n2;
}
main()
{
	int *a,n,k,m,x,*b,*c,nb,nc;
	do
	{
		printf("nhap n:");
		scanf("%d",&n);
	}
	while(n<1||n>50);
	a=(int *)malloc(n*sizeof(int ));
	b=(int *)malloc(n*sizeof(int ));
	c=(int *)malloc(n*sizeof(int ));
	nhapmang(a,n);
	printf("mang vua nhap la:");
	xuatmang(a,n);
	printf("\n max cpc la: %d",maxcpc(a,n));
	printf("\n vi tri cp chan max la: ");
	vtcpcmax(a,n);
	printf("\n vi tri cpcmaxcc: ");
	cpcmaxcc(a,n);
	printf("\n vi tri cac so nt max la:");
	vtntmax(a,n);
	printf("\n vi tri nt le dt: %d",ntledt(a,n));
	printf("\n dem nt max: %d",demntmax(a,n));
	printf("\n tbc cac so nt la: %d",tongnt(a,n));
	sxntkont(a,n);
	printf("\n sx nt giam dan,ko nt tang dan:");
	xuatmang(a,n);
	do
	{
		printf("nhap k:");
		scanf("%d",&k);
	}
	while(k<0||k>n);
	chendtvk(a,&n,m,k);
	printf("chen vi tri nt dt vao k: ");
	xuatmang(a,n);
	chenntccvmindt(a,&n,m,k);
	printf("\n chen nt cc vao min dt:");
	xuatmang(a,n);
	printf("nhap x:");
	scanf("%d",&x);
	xoax(a,&n,x);
	printf("\n mang sau khi xoa vi tri x la:");
	xuatmang(a,n);
	tachntkont(a,n,b,&nb,c,&nc);
	printf("tach mang nt,ko nt la:");
	printf("\ nmang nt: ");
	xuatmang(b,nb);
	printf("mang ko nt la:");
	xuatmang(c,nc);
	getch();
	
}