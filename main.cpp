#include <stdio.h>

main()
{
	printf("Zadanie 1:\n");
	for(int j=1;j<=10;j++)
	{
		printf("%i*5=%i\n",j,j*5);
	}

	printf("\nZadanie2:\n");
	
	int a=7;
	while(a!=5)
	{
		scanf("%i",&a);
		if(a==7)
		{
			printf("%i menshe 10\n",a);
		}
		if(a==10)
		{
			printf("%i bolshe 7\n",a);
		}
		if(a>10)
		{
			printf("%i bolshe 7\n",a);
			printf("%i bolshe 10\n",a);
		}
		else
		{
			if(a<7 && a!=10)
			{
				printf("%i menshe 7\n",a);
				printf("%i menshe 10\n",a);			
			}
			if(a>7 && a!=10)
			{
				printf("%i bolshe 7\n",a);
				printf("%i menshe 10\n",a);
			}
		}
		if(a%2==0)
		{
			printf("%i delitsya na 2\n",a);
		}
		else
		{
			printf("%i ne delitsya na 2\n",a);
		}
		if(a%3==0)
		{
			printf("%i delitsya na 3\n",a);
		}
		else
		{
			printf("%i ne delitsya na 3\n",a);
		}
	}
}
