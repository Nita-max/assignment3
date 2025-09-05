void main()
{
	int n=5,i=1,fact=1;
	
	
	if(n<0)
	{
	  printf("factorial is not defined for negative numbers.\n");	
	}
	else
	{
	while(i<=n)
	{
	  fact= fact*i;		
      i++;
	}
	printf("factorial of %d is %d.\n",n,fact);	
		
		
}
	


		
}