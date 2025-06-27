void main()
{
	int num=10;
	
	even( &num);

}

void even( int* num)
{
	if(*num%2==0)
	{
		printf(" Even");
	}
	else
printf(" odd");
}