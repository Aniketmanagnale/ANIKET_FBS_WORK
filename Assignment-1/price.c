void main()
{
	double price=500;
	char isstudent='n';
	double tprice;
	double discount=0;
	if(isstudent=='y')
	{
		if(price>=500)
		{
			discount=price*0.20;
			tprice=	price-discount;
		}
		else
		{
			discount=price*0.10;
			tprice=	price-discount;	
		}
	}
	else
	{
		if(price>=600)
		{
			discount=price*0.15;
			tprice=price-discount;
		}
		else
		{
			tprice=price;
		}
		
	}
	if(discount!=0)
		printf("Your actual price was %.2lf with total discount of %lf you have to pay %lf",price,discount,tprice);
	else
		printf("Final price is %lf with no discount",tprice);
}