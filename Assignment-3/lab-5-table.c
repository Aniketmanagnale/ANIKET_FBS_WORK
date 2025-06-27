void main() 
{

table();


}
int table() {
   int res;
	int num=5;
	for(int i=1; i<=10; i++) {
		 res=num*i;
		printf("%d*%d= %d  \n",num,i,res);
        
	}
	return res;
}