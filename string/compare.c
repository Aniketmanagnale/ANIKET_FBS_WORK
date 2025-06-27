void main()
{
	char str1[]="hello";
	char str2[]="World";
	char str3[]="hello";
	
	int x=strcmp(str1,str2);
	printf("\n %d",x);
	
	int d=strcmp(str1,str3);
	printf(" \n %d",d);
	
	
	int s=strspn(str1,str3);
	printf("\n The matching char are  %d",s);
}