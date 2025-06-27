void main()
{
	char str[]="FBS";
	
	mystrrev(str);
}
 void mystrrev(char* str)
{
	int x=strlen(str)+1;
	char s2[x];
	int i=0;
	while(str[i]!='\0')
	{
		s2[i]=str[3-1-i];
		i++;
	}

	printf("%s",s2);
}