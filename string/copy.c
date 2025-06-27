void main()
{
	char str1[]="hello";
	char str2[4]="";
	
 char* x=strcpy(str2,str1);
 printf(" %s",x);
   
   
   printf("%s",str2);
 strncpy(str2,str1,3);
 
 printf("\n%s",str2);
}