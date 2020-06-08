#include<stdio.h>
#include<iostream>

int ur_wish(void);
int ur_choice(void);
int ur_dishboard(char);
void ur_bill(void);
void total();
float totl =0 ;

int front_scr()
{   char ch;
    system("COLOR 74");
	
	printf("----------------------------------------------------------------------------------------------------------");
	printf(" \n                                            %c_welcome_%c\n\n\n\n\n\n",3,3);
	printf("\n\n\n\n\n                                             HOTEL_D!|B@#@@R                                           ");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                 _#appy@ating!!");
	printf("\nPress Y to continue :");
	scanf("%c",&ch);
	if (ch == 'Y'||'y')
	{
		ur_wish();
	}
return 0;
}

int ur_wish()
{   system("cls");
	system("COLOR ed");
	printf(" \n                                                    D!|B@#@@R   \n\n                ");
	printf("\n \n\n\n\n\nHello, please let us know ur taste . \n\n Under_Vegetarian \n\n\n            dish_id            category");
	printf("\n        ------------------------------------  ");
	printf("\n            a)            South Indian \n            b)            Maharashtrian \n            c)            Punjabi \n            d)            Rajasthani \n            e)            Gujarati \n            f)            odissi \n            g)            North Indian");
    printf("\n        ------------------------------------ ");
    ur_choice();
	

	return 0;}
	
	
int ur_choice(){
	char dish;
	printf("\n\nEnter your dish_id: ");
	scanf("%s",&dish);
	ur_dishboard(dish);
	
return 0;	
}	
	
	
int ur_dishboard(char dish){
	char sh[20];
	system("cls");
	
	printf("\n\n                                                        D!|B@#@@R\n\n\n\n");
	switch(dish){
	case 'a':
	{system("color 6b");
	printf("\n\n\n                                             Welcome to rajasthani zayka   ");
	
	printf("\n                                         ----------------------------------------  ");

    printf("\n\n\n            ------------------------------------------- ");
    printf("\n             item      ur_dish              cost       ");
    printf("\n           --------------------------------------------  ");
    printf("\n\n             1d)    choorma               Rs.70       ");
    printf("\n\n             2d)    special_rice          Rs.45        ");
    printf("\n           -------------------------------------------- ");
    
	break;}
	
	case 'b':{system("color 7e");
	printf("\n\n\n                                Welcome to Maharashtrian  chaaav.");
	
	printf("\n                             ------------------------------------------  ");
    printf("\n\n\n            ------------------------------------------- ");
    printf("\n         item        ur_dish           cost       ");
    printf("\n        -------------------------------------------  ");
    printf("\n\n        1b)       pao bhajii         Rs.70       ");
    printf("\n\n        2b)       vada pao           Rs.45        ");
    printf("\n        ------------------------------------------- ");
    break;}
	
	case 'c':
	{system("color 69");
	printf("\n\n\n                                         Welcome to   South Indian Stoll");
	
	printf("\n                                       ---------------------------------------  ");
	
    printf("\n\n\n      -------------------------------------------- ");
    printf("\n         item       ur_dish              cost       ");
    printf("\n        --------------------------------------------  ");
    printf("\n\n         1a)      idli_sambhar         Rs.70       ");
    printf("\n\n         2a)      dosa                 Rs.45        ");
    printf("\n        --------------------------------------------- ");
    
	break;}
	
	case 'd':
	{system("color 72");
	printf("\n\n\n                                             Welcome to North Indian zayka");
	
	printf("\n                                          ---------------------------------------  ");
	
    printf("\n\n\n          ------------------------------------------------- ");
    printf("\n              item              ur_dish              cost       ");
    printf("\n            -------------------------------------------------  ");
    printf("\n\n             1g)             chole kulche          Rs.170       ");
    printf("\n\n             2g)             fried_rice            Rs.45        ");
    printf("\n            -------------------------------------------------- ");
    
	
	break;}
	
	case 'e':
	{system("color 4f");
	printf("\n\n\n                                                    Welcome to Odissi ahhh");
	
	printf("\n                                              ---------------------------------------  ");
	
    printf("\n\n\n         ---------------------------------------------- ");
    printf("\n            item         ur_dish                cost       ");
    printf("\n          -----------------------------------------------  ");
    printf("\n\n           1f)          uttapamm               Rs.70       ");
    printf("\n\n           2f)          special_rice           Rs.45        ");
    printf("\n          ----------------------------------------------- ");
    
	break;}
	
	case 'f':
	{system("color 34");
	printf("\n\n\n                                                       Welcome to Gujarati .");
	
	printf("\n                                                  -----------------------------------  ");
	
    printf("\n\n         -------------------------------------------------- ");
    printf("\n            item                 ur_dish           cost     ");
    printf("\n         --------------------------------------------------  ");
    printf("\n\n            1e)               choorma              Rs.70       ");
    printf("\n\n            2e)               daal_baati           Rs.85        ");
    printf("\n         --------------------------------------------------- ");
    
	break;}
	
	case 'g':
	{system("color 2a");
	printf("\n\n                                                    Welcome to  Punjabi zayka");
	
	printf("\n                                                ------------------------------------  ");
	
    printf("\n\n\n      ---------------------------------------------- ");
    printf("\n          item          ur_dish               cost       ");
    printf("\n        ----------------------------------------------  ");
    printf("\n\n          1c)      makke_di_roti            Rs.120       ");
    printf("\n\n          2c)      special_parathe          Rs.45        ");
    printf("\n\n          2c)      lassii                   Rs.65        ");
    printf("\n        ----------------------------------------------- ");
    
	break;}
}	

printf("\n\nEnter your item number:");
scanf("%s",&sh);
  total();
printf("\n\n\n\n\n\n\n\n\n\n\n\n                                                                                 _#appy@ating!!");	
}


void total(){
	
    int c =1 , back = 0;
	int cost;
	
	while(c == 1){
		
	printf("\nEnter cost of item: ");
	scanf("%d",&cost);
	totl += cost;
	printf("\n Your total :%f",totl);
	printf("\nDO you want anything more ? press 1:");
	scanf("%d",&c);
	printf("\nDo you want to go to previous menu ? press 2:");
	scanf("%d",&back);
	if(back == 2){
		ur_wish();
	}
    }
ur_bill();
}


void ur_bill(){
	system("cls");system("color 9f");
	printf("\n                                                      D!|B@#@@R");
	printf("\n\nDear customer, ");
	printf("\n                                                 Total_Expenditure");
	printf("\n\n\n\n                          ------------------------------------------------------------------               ");
	printf("\n\n                                     GST               :                0.00 ");
	printf("\n\n                                     TAX               :                7.00  ");
	printf("\n\n                                    FOOD_PR            :                %2f                   ",totl);
	printf("\n\n                                    DISCOUNT           :                2%%           ");
	printf("\n\n                         ------------------------------------------------------------------    ");
	printf("\n\n                                    PAYABLE_AMT        :                 %2f",(totl+7)-((2*totl)/100));
	printf("\n\n                         ------------------------------------------------------------------         ");
	
    printf("\n\n                                                    Visit_Again");
    printf("\n\n                                                                       @thankuuu__");

	printf("\n\n\n                                                                                  We_love_#aving_u");
    int e;
	printf("\npress 1 to exit: ");
	scanf("%d",&e);
	if(e == 1)
    {
    	exit(0);
	}	
	
	

}

int main()
{
	
front_scr();
return 0;
}
