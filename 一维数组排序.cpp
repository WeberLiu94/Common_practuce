#include "stdio.h"
#define N 5


void sort( int *p,int n)                    
{
	int i,j,temp;
	
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(*(p+i)>*(p+j)) 	{temp=*(p+i);*(p+i)=*(p+j);*(p+j)=temp;	}
		
}



void main()
{
	int a[N];
	int i;
	
	
	printf("��������Ҫ���������:\n");
	for(i=0;i<N;i++) scanf("%d",a+i);
	
	sort(a,N);

		printf("����֮�������Ϊ:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);

}


