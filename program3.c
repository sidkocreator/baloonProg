#include<stdio.h>


int main()
{
	

	int i,j,pos;
	int a[50];
	int b[50];

	printf("\nEnter the numbers on baloons: ");
	

	for(i = 0; i < 9; i ++)
	{
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	
	

	for(i = 0; i < 9; i++)
	{
		for(j = i+1; j < 9; j++)
		{
			if(a[i] == a[j])
			{
				pos = j;
			}

		
		}
		b[pos] = -1;
	}


	printf("\nThe new contents are: ");

	for(i = 0; i < 9; i ++)
	{
		if(b[i] != -1)
		{
			printf("%d",b[i]);
			printf("\n");
		}
	}

return 0;




}
