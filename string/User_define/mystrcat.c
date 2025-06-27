
void main() {
	char s1[]="Hello";
	char s2[]="fbs";

	int len1=strlen(s1);
	int len2=strlen(s2);
	int c=len1+len2+1;
	char s3[c];
	int i=0;
	while(s1[i]!='\0') {
		s3[i]=s1[i];
		i++;
		
	}
	int j=0;
		while(s2[j]!='\0') 
		{
			s3[i]=s2[j];
            i++;
			j++;

		}
   s3[i]='\0';
		printf("%s",s3);

	
}