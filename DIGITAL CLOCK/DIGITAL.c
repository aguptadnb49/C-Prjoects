#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<unistd.h>
int main()
{
	int h=0,m=0,s=0;
	double i;
	
	printf("Please enter a time format in HH:MM:SS");
	scanf("%d%d%d",&h,&m,&s);
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				
				if(h<12)
				{
					system("cls");
					printf("\n\n\t\t\t%d:%d:%d AM",h,m,s);
					sleep(1);
				}
				else
				{
					system("cls");
					printf("\n\n\t\t\t%d:%d:%d AM",h,m,s);
					sleep(1);
				}
				for(i=0;i<3619999;i++)
				i++;
				i--;
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
getch();
}