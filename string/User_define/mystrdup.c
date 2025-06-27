char* mystrdup(char* );
void main()
{
	char s1[10]="Hello";
	
	
char* s=mystrdup(s1);
printf("%s",s);
}
  char* mystrdup(char* s1)
{
	int len=sizeof(s1)+1;
	//printf("%d",len);
 char* x=(char*)malloc(sizeof(char)*len);
 //char x[len];
 for(int i=0;i<len;i++)
 {
 	x[i]=s1[i];
 }
 return x;
 //printf("%s",x);
  }