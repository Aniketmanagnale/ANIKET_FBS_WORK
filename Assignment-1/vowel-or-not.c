void main()
{  int res;
 res=vowel();
 if( res==1)
 printf(" Vowel ");
 else
 printf(" Consonant");	
}

void vowel()
{

	 char c='j';
	
	if(c=='A' || c=='a' ||c=='e'||c=='E'||c=='i' ||c=='I'
	||c=='o'||c=='O'||c=='u'||c=='U')
	
	return 1;
}
