#include<string.h>
int main()
{
	char mailid[]="firstbit.gmai@l.com";
	
	if(strchr(mailid,'@')!='\0'&&strchr(mailid,'@')==strrchr(mailid,'@'))
		printf("mail is valid");
	else
		printf("mail invalid");
	
}
	

	
	
