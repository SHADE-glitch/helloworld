#include  <stdio.h>
 
 
 	int price = 0;
 	int bill = 0;
 	
 	printf("请输入金额: ");
    scanf("%d", &price) ;
		
		printf("请输入票面： ")	；
	scanf("%d", &bill);
	
	if(bill>=price)
	{
		printf("应该找你：%d"，bill - price);
	} 
 	

 
