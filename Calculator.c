#include<stdio.h>
#include<conio.h>
#include<math.h>
float jog(float *p);
float biog(float *p);
float vag(float *p);
float gun(float *p);
int main()
{
	float n,i=0,*p;
	char ch;
	while(1) 
	{
		if (i==0)
		{
			scanf("%f",&n);
		}
		scanf("%c",&ch);
		p=&n;
		if (ch=='+')
		{
			jog(p);
			printf("%.2f\n", *p);
		}
	    else if (ch=='-')
		{
			biog(p);
			printf("%.2f\n", *p);
		}
		else if (ch=='*')
		{
			gun(p);
			printf("%.2f\n", *p);
		}
		else if (ch=='/')
		{
			vag(p);
			printf("%.2f\n", *p);
		}


		i=2;

	}
}
float jog(float *p)
{
	float n;
	scanf("%f",&n);
	return *p=*p+n;
}

float biog(float *p)
{
	float n;
	scanf("%f",&n);
	return *p=*p-n;
}
float gun(float *p)
{
	float n;
	scanf("%f",&n);
	return *p=*p * n;
}
float vag(float *p)
{
	float n;
	scanf("%f",&n);
	return *p=*p/n;
}
