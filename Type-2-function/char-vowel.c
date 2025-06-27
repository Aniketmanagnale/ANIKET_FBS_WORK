void main()
{
 int _x=vowel();
 {
 	if(_x==1)
 	printf("The Char is vowel");
 	else
 	printf(" The Char is not vowel");
 }	
 
}

int  vowel()
{

	 char c='p';
	
	if(c=='A' || c=='a' ||c=='e'||c=='E'||c=='i' ||c=='I'
	||c=='o'||c=='O'||c=='u'||c=='U')
	{
		
		return 1;
	}
	else
	{
	return 0;
	}
}
