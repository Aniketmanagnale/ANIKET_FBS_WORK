float temp();
int main()
{
	 float res=temp();
	printf("%f",res);
}

float temp()
{
	float celsius=1200;
	
	float fer=(celsius*9/5)+32;
	
	//printf("%f",fer);
	return fer;
}