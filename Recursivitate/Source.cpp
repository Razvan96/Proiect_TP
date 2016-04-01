// fact rec
/*#include<stdio.h>
#include<stdlib.h>*/

/*int factorial(int n)
{
	if (n==0) return 1;
	else
		return n*factorial(n-1);
}
int main()
{
	int n;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",factorial(n));
}*/

// cmmdc
/*#include<stdio.h>
#include<stdlib.h>

int cmmdc(int a,int b)
{
	if (a==b) return a;
	else
	{
		if(a>b) 
			a-=b;
		else
			b-=a;
		cmmdc(a,b);
	}
}
int main()
{
	int a,b;
	printf("a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	printf("%d \n",cmmdc(a,b));
}*/



// sumcif 
/*#include<stdio.h>
#include<stdlib.h>

int sumcif(int n)
{
	if(n!=0)
		return n%10+sumcif(n/10);
	else
		return 0;
}
int main()
{
	int n;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",sumcif(n));
}*/

// nrcifzero 
/*#include<stdio.h>
#include<stdlib.h>

int nrzero(int n)
{
	if(n==0) return 1;
	if(n%10==0)
		return 1+nrzero(n/10);
	else
		return 0;
}
int main()
{
	int n;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",nrzero(n));
}*/

// cifmax 
/*#include<stdio.h>
#include<stdlib.h>

int cifmax(int n,int min)
{
	if(n==0) return min;
	if(n%10>min)
		min=n%10;
	cifmax(n/10,min);
}
int main()
{
	int n,min=0;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",cifmax(n,min));
}*/


// cifmin 
/*#include<stdio.h>
#include<stdlib.h>

int cifmin(int n,int min)
{
	if(n==0) return min;
	if(n%10<min)
		min=n%10;
	cifmin(n/10,min);
}
int main()
{
	int n,min=10;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",cifmin(n,min));
}*/


// suma 1 
/*#include<stdio.h>
#include<stdlib.h>

int suma1(int n,int i)
{
	if(i==3*n-2) return i*i;
	else
		return i*i+suma1(n,i+3);
}
int main()
{
	int n,i=1;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",suma1(n,i));
}*/



// suma 2 
/*#include<stdio.h>
#include<stdlib.h>

int suma1(int n,int i)
{
	if(i==2*n-1) return i;
	else
		return i+suma1(n,i+2);
}
int main()
{
	int n,i=1;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",suma1(n,i));
}*/


// suma 3 
/*#include<stdio.h>
#include<stdlib.h>

int suma3(int n,int i)
{
	if(i>=n) return 1;
	else
		return i*suma3(n,i+2);
}
int main()
{
	int n,i=1;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",suma3(n,i));
}*/

// suma 4 
/*#include<stdio.h>
#include<stdlib.h>

int suma4(int n,int i)
{
	if(i>n) return 0;
	else
		return i+suma4(n,i+1);
}
int main()
{
	int n,i=1;
	printf("n= ");
	scanf("%d",&n);
	printf("%d \n",suma4(n,i));
}*/

// prob 5 
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void prob5(char *s,int n)
{
	char c;
	printf("c= ");
	scanf("%c",&c);
	printf("\n");
	if(c=='$')
	{
		s[n]='\0';
		for(int i=strlen(s)-1;i>=0;i--)
			printf("%c ",s[i]);
		printf("\n");
	}
	else
		if(c>='0'&&c<='9')
		{
			s[n]=c;
			n++;
			prob5(s,n);
		}
		else
			prob5(s,n);
}
int main()
{
	char s[100];
	int n=0;
	prob5(s,n);
}*/

// prob 6 
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void prob6(char s[20][100],int n,int c)
{
	char cuv[50];
	if(c<=(n-1))
	{
	printf("Cuvantul este ");
	scanf("%s",cuv);
	strcpy(s[c],cuv);
	c++;
	prob6(s,n,c);
	}
	else
	{
		for(int i=n-1;i>=0;i--)
			printf("%s \n",s[i]);
	}
	
}
int main()
{
	char s[20][100];
	int c=0,n;
	printf("n= ");
	scanf("%d",&n);
	prob6(s,n,c);
}*/


// prob 11
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void prob11(int x,int n,int s)
{
	if(n<=x)
	{
	if(x%n==0)
		s+=n;
	prob11(x,n+1,s);
	}
	else
		printf("Suma divizorilor este %d \n",s);
}
int main()
{
	int x,n=1,s=0;
	printf("x= ");
	scanf("%d",&x);
	prob11(x,n,s);
}*/

// prob 16
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void prob16(int n)
{
	if(n!=0)
	{
		printf("%d",n%10);
		prob16(n/10);
	}
	printf("\n");
}
int main()
{
	int n,s=0;
	printf("n= ");
	scanf("%d",&n);
	prob16(n);
}*/


// prob 19
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int prim(int x)
{
	int ok=1;
	for(int i=2;i<=x/2;i++)
		if(x%i==0)
			ok=0;
	if(ok==1)
		return 1;
	else
		return 0;
}

void prob19(int n,int c)
{
	int copie;
	int putere=0;
	if(c<=n/2)
	{
		if(n%c==0)
			if(prim(c))
			{
				copie=n;
				while(copie)
				{
					if(copie%c==0)
					{putere++;copie/=c;}
					else
						copie=0;
				}
				printf("%d la puterea %d \n",c,putere);
			}
		prob19(n,c+1);
	}
}
int main()
{
	int n,s=0,c=2;
	printf("n= ");
	scanf("%d",&n);
	prob19(n,c);
}*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void cmmdc(int n,int c,int x,int y,int v[100])
{
	if(c<=n)
	{
		while(x!=y)
		{
			if(x>y) x-=y;
			else
				y-=x;
		}c++;
		//printf("%d \n",x);
		cmmdc(n,c,x,v[c],v);
	}
	else
		printf("%d \n",x);
}
int main()
{
	int n,v[100],c=1;
	printf("n= ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("v[%d]= ",i);
		scanf("%d",&v[i]);
	}
	cmmdc(n,c,v[c],v[c+1],v);
}
*/



//sirpie
/*#include<stdio.h>
#include<stdlib.h>
bool verifica(int* v,int i,int* a)
{
	for(int j=0;j<i;j++)
		if(a[j]==a[i])
			return false;
	return true;
}
int cmmdc(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
void prime(int i,int n,int a[21],int* v)
{
	if(i==n)
	{
		int ok=1;
		for(int i=0;i<n-1;i++)
			if(cmmdc(a[i],a[i+1])!=1)
				ok=0;
		if(ok){
		for(int j=0;j<n;j++)
			printf("%d ",a[j]);
		printf("\n");
		return;
		}
	}
	for(int j=0;j<n;j++)
	{
		a[i]=v[j];
		if(verifica(v,i,a))
				prime(i+1,n,a,v);
	}
}
int main()
{
	int n,v[100],aux,a[21];
	printf("n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("v[%d]= ",i);
		scanf("%d",&v[i]);
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(v[i]>v[j])
			{
				aux=v[j];
				v[j]=v[i];
				v[i]=aux;
			}
	prime(0,n,a,v);
}*/


//permutari 2
/*#include<stdio.h>
#include<stdlib.h>
bool verific(int* a,int i)
{
	for(int j=0;j<i;j++)
		if(a[i]==a[j])
			return false;
	return true;
}
void permut(int i,int* v,int n,int* a)
{
	if(i==n)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[j]);
		printf("\n");
		return;
	}
	for(int j=0;j<n;j++)
	{
		a[i]=v[j];
		if(verific(a,i))
			permut(i+1,v,n,a);
	}
}
int main()
{
	int n,v[100],a[100],aux;
	printf("n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("v[%d]= ",i);
		scanf("%d",&v[i]);
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(v[i]>v[j])
			{
				aux=v[j];
				v[j]=v[i];
				v[i]=aux;
			}
	
	permut(0,v,n,a);
}*/

//permutpf
/*#include<stdio.h>
#include<stdlib.h>
bool verific(int* a,int i)
{
	for(int j=0;j<i;j++)
		if(a[i]==a[j])
			return false;
	return true;
}
void permut(int i,int* v,int n,int* a)
{
	if(i==n)
	{
		int ok=1;
		for(int j=0;j<n;j++)
			if(a[j]==(j+1))
				ok=0;
		if(ok)
		{
		for(int j=0;j<n;j++)
			printf("%d ",a[j]);
		printf("\n");
		return;
		}
	}
	for(int j=0;j<n;j++)
	{
		a[i]=v[j];
		if(verific(a,i))
			permut(i+1,v,n,a);
	}
}
int main()
{
	int n,v[100],a[100],aux;
	printf("n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("v[%d]= ",i);
		scanf("%d",&v[i]);
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(v[i]>v[j])
			{
				aux=v[j];
				v[j]=v[i];
				v[i]=aux;
			}
	
	permut(0,v,n,a);
}*/

//siruri

/*
#include<stdio.h>
#include<stdlib.h>
void combinari(int n,int m,int* v,int i)
{
	if(i==m){//solutie
		int ok=1;
		for(int j=0;j<m-1;j++)
			if(v[j+1]-v[j]>2)
				ok=0;
		if(ok)
		{
		for(int j=0;j<m;j++)
			printf("%d\t",v[j]);
		printf("\n"); return;
		}
	}
	int start=1;
	if(i>0) start=v[i-1]+1; // stim de unde sa incepem !
	for(int j=start;j<=n;j++){
		v[i]=j; combinari(n,m,v,i+1);
	}

}


int main()
{
	int n,m,v[100],i;
	printf("Numarul de elemente este : n= ");
	scanf("%d",&n);
	printf("m= ");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
		v[i]=i+1;
	combinari(n,m,v,0);
}*/


//probleme partitie
/*
#include<stdio.h>
#include<stdlib.h>
int ns;
void afis(int l,int ns,int* sol)
{ int i;
	ns++;
	printf("Solutia nr. %d : ",ns);
	for(i=1;i<=l;i++) 
		printf("%d ",sol[i]);
	printf("\n");
}
void part(int i,int n,int* sol,int sp)
{
	int j;
	if(sp==n) afis(i-1,ns,sol);
	else
		for(j=1;j<=n-sp;j++)
			if (j>=sol[i-1])
	{
		sol[i]=j;
		part(i+1,n,sol,sp+j);
	}
}

int main()
{
	int n,sol[20];
	printf("n= ");
	scanf("%d",&n);
	part(1,n,sol,0);
}*/


//subdiv
/*#include<stdio.h>
#include<stdlib.h>
int a[100];
void comb(int m,int* v,int i,int contor)
{
	if(i==m)
	{
		for(int j=0;j<m;j++)
			printf("%d ",a[j]);
		printf("\n");
		return;
	}
	int start=0;
	if(i>0) start=i;
	for(int j=start;j<=contor;j++)
	{
		a[i]=v[j];
		if((a[i]!=a[i-1])&&(a[i]>a[i-1]))
		comb(m,v,i+1,contor);
	}
}

void div(int x,int* v,int m)
{
	int contor=0;
	v[0]=1;
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
		contor++;
		v[contor]=i;
		}
	}
	contor++;v[contor]=x;
	comb(m,v,0,contor);
}
int main()
{
	int x,m,v[100];
	scanf("%d%d",&x,&m);
	div(x,v,m);
}*/

//submultimi
/*#include <stdio.h> //SUBMULÞIMI 2
#include<stdlib.h>
void submultimi(int n,int* x,int i){
	if(i<=n){//solutie
		for(int j=0;j<i;j++)	printf("%d\t",x[j]);
		printf("\n"); // fara return!
	}
	int start=1;
	if(i>0) start=x[i-1]+1;
	for(int j=start;j<=n;j++){
		x[i]=j;
		submultimi(n,x,i+1);
	}
}

int main()
{
	int n,x[100];
	printf("n= ");
	scanf("%d",&n);
	submultimi(n,x,0);
}*/


//sirab
/*#include<stdio.h>
#include<stdlib.h>
void comb(int S,int* v,int n,int i)
{
	if(i==n)
	{
		for(int j=0;j<n;j++)
			printf("%d ",v[j]);
		printf("\n");
		return;
	}
	int start=1;
	if(i>0) start=v[i-1]+1;
	for(int j=start;j<=S;j++)
	{
		v[i]=j;
		comb(S,v,n,i+1);
	}
}
int main()
{
	int S,n,v[100];
	printf("S= ");
	scanf("%d",&S);
	printf("n= ");
	scanf("%d",&n);
	comb(S,v,n,0);
}*/

/*#include<stdio.h>
#include<stdlib.h>
#define N 11
int p[N]={100,10,10,50,50,3,1,1,1,100,50};
int S=210;
int sol[N];
void afis(int z)
{
	for(int i=0;i<=z;i++)
		printf("%d ",sol[i]);
	printf("\n");
}
int verifica(int k,int z,int S2)
{
	if(S2+k>S)
		return 0;
	return 1;
}
void back(int z,int S2,int h)
{
	if(z==N)
		return;
	for(int i=h;i<N;i++)
	{
		if(verifica(p[i],z,S2))
		{
			sol[z]=p[i];
			if(S2+sol[z]==S) 
				afis(z);
			back(z+1,S2+sol[z],i+1);
		}
	}
}
int main()
{
	int i;
	back(0,0,0);
}
*/


/*
#include<stdio.h>
#include<stdlib.h>
#define N 11
int p[N]={0,1,2,3};
int S=3;
int sol[N];
int k=2;
void afis(int z)
{
	for(int i=0;i<=z;i++)
		printf("%d ",sol[i]);
	printf("\n");
}
int verifica(int k,int z,int S2)
{
	if(S2+k>S)
		return 0;
	return 1;
}
void back(int z,int S2,int h)
{
	if(z==N)
		return;
	for(int i=h;i<N;i++)
	{
		if(verifica(p[i],z,S2))
		{
			sol[z]=p[i];
			if((S2+sol[z]==S)&&(z==(k-1))) 
				afis(z);
			back(z+1,S2+sol[z],i+1);
		}
	}
}
int main()
{
	int i;
	back(0,0,0);
}*/


/*#include<stdio.h>
#include<stdlib.h>
#define N 100
int v[N];
void afis(int i)
{
	for(int j=0;j<=i;j++)
		printf("%d ",v[j]);
	printf("\n");
}
int verific(int i,int s,int s2)
{
	if(v[i]+s2<=s)
		return 1;
	return 0;
}
void suma(int i,int n,int s2)
{
	if(i==n)
		return;
	
	for(int j=1;j<=n;j++)
	{
		v[i]=j;
		if(verific(i,n,s2))
		{
			if(s2+v[i]==n)
				afis(i);
			suma(i+1,n,s2+v[i]);
		}
	}
}
int main()
{
	int n;
	printf("n= ");
	scanf("%d",&n);
	suma(0,n,0);
}*/

// descompunerea unui numar ca suma de numere prime
/*#include<stdio.h>
#include<stdlib.h>
#define N 100
int v[N];
void afis(int i)
{
	for(int j=0;j<=i;j++)
		printf("%d ",v[j]);
	printf("\n");
}
int prim(int x)
{
	int ok=1,nr=0;
	for(int j=2;j<=x/2;j++)
		if(x%j==0)
			ok=0;
	if(ok==1)
		return 1;
	return 0;
}
int verific(int i,int s,int s2)
{
	int ok=0;
	if(v[i]+s2<=s)
		ok=1;
	if((ok==1)&&(prim(v[i]))&&(v[i]!=1))
		return 1;
	return 0;
}
void suma(int i,int n,int s2)
{
	if(i==n)
		return;
	
	for(int j=1;j<=n;j++)
	{
		v[i]=j;
		if(verific(i,n,s2))
		{
			if(s2+v[i]==n)
				afis(i);
			suma(i+1,n,s2+v[i]);
		}
	}
}
int main()
{
	int n;
	printf("n= ");
	scanf("%d",&n);
	suma(0,n,0);
}*/

//supermultiplu de un numar
#include<stdio.h>
#include<stdlib.h>
#define N 20
int v[N];
void afis(int i)
{
	for(int j=0;j<=i;j++)
		printf("%d ",v[j]);
	printf("\n");
}
int verific(int i,int p)
{
	int ok=1;
	for(int j=0;j<i;j++)
		if(v[j]>=v[j+1])
			ok=0;
	if((v[i]%p==0)&&(ok))
		return 1;
	return 0;
}
void back(int i,int n,int p)
{
	if(i==9)
		return;
	for(int j=1;j<=9;j++)
	{
		v[i]=j;
		if(verific(i,p))
		{
			if(i==(n-1))
				afis(i);
			back(i+1,n,p);
		}
	}
}
int main()
{
	int n,p;
	printf("n= ");
	scanf("%d",&n);
	printf("p= ");
	scanf("%d",&p);
	back(0,n,p);
}


