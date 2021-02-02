#include<stdio.h>
void main()
{
	int sum,sum2=0,j,no,c;
	long long int range1,range2,k,i;
	printf("Enter the sum you want to generate from your vehcle number: ");
	scanf("%d",&sum);
	printf("Enter the a single digit that you want to have in number plate: ");
	scanf("%d",&no);
	printf("Enter the Start Range and End Range, which the RTO is giving: ");
	scanf("%lld",&range1);
	scanf("%lld",&range2);
	for(i=range1;i<=range2;i++)
	{
		k=i;
		sum2=0;
		while(k>0)
		{
			j=k%10;
			sum2=sum2+j;
			k=k/10;
		}
		
		if(sum2==sum)
		{
			printf("\nOption: %d", i);
		}
	}
	
	printf("\n================================================");
	
	for(i=range1;i<=range2;i++)
	{
		k=i;
		c=0;
		while(k>0)
		{
			j=k%10;
			k=k/10;
			if(j==no)
			{
				
				c++;
			}
		}
		
		if(c>=2)
		{
			printf("\nOption: %d", i);
		}
		
	}
}