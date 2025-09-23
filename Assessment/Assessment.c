/*genret biling system*/
#include<stdio.h>
void menu(){
	printf("\nitem name\tprice");
	printf("\n 1.pizza\t180rs");
	printf("\n 2.burger\t100rs");
	printf("\n 3.pasta\t150rs");
	printf("\n 4.lazaniya\t200rs");
	printf("\n 5.cake\t\t250rs");
	return;
	
}

main()
{
	menu();
	int quntity,amount;
	char choise;
	char a;

	printf("\n enter your choise=");
	scanf("%c",&choise);
	
	switch(choise){
		case '1':
			printf("\nyou have select pizza");
			printf("\nenter quntity=");
			scanf("%d",&quntity);
			amount=quntity*180;
			printf("\namount=%d",amount);
			printf("");
			scanf("%c",&a);
	switch(a){
		case'y':
			menu();
		case'n':
			break;
	}
			
			break;	
			
		case'2':
			printf("\nyou have select burger");
			printf("\nenter quntity=");
			scanf("%d",&quntity);
			amount=quntity*100;
			printf("\namount=%d",amount);
			break;

		case'3':
			printf("\nyou have select pasta");
			printf("\nenter quntity=");
			scanf("%d",&quntity);
			amount=quntity*150;
			printf("\namount=%d",amount);
			break;
									

		case'4':
			printf("\nyou have select lazaniya");
			printf("\nenter quntity=");
			scanf("%d",&quntity);
			amount=quntity*200;
			printf("\namount=%d",amount);
			break;

		case'5':
			printf("\nyou have select cake");
			printf("\nenter quntity=");
			scanf("%d",&quntity);
			amount=quntity*250;
			printf("\namount=%d",amount);
			break;
			
		default:
			printf("\n wrong choise");
			break;		
	}
	printf("\n do you want palce more order...");
	scanf("%c",&a);
	switch(a){
		case'y':
			menu();
			
		case'n':
			break;
	}
}
