#include <stdio.h>

main()
{
	int per;
	
	printf("Enter your Marks =");
	scanf("%d",&per);
	
	if (per>=90 && per<=100)
	{
		printf("The Grade is A. excellent work. you are Eligible for next level.");
	}
	else if (per>=75 && per<=85)
	{
		printf("The Grade is B. excellent work. you are Eligible for next level.");
	}
	else if(per>=65 && per<=74)
	{
		printf("The Grade is C. excellent work. you are Eligible for next level.");
	}
	else if (per>=45 && per<=64)
	{
		printf("The Grade is D. excellent work. you are Eligible for next level.");
	}
	else if (per>=35 && per<=44)
	{
		printf("The Grade is E. Sorry, you are not Eligible for next level.");
	}
	else if (per>=0 && per<=34)
	{
		printf("The Grade is F.Sorry,you are failed");
	}
	else
	{
		printf("please try again");
	}
}