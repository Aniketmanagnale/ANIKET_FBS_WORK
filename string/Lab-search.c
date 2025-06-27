int search(char* ,char );
void main()
{
	char s1[]="Fbs";
	char c='x';
	
int* x=search(s1,c);
if(x!=-1)
	printf(" Find  %d",x);
	else
	{
		printf("not");
	}

}

int search(char* s1,char c)
   {
   	int i=0;
   	while(s1[i]!='\0')
   	{
   		if(s1[i]==c)
   		return i;	
   		i++;
	   }
	   return -1;
   }