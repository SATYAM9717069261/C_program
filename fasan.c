#include<stdio.h>
int main()
{
    int age;
    char h[100],live[100],sex;
    printf("enter the health instruction\n");
    scanf("%c",&h);
    printf("enter the area where he lives\n");
    scanf("%c",&live);
    printf("enter the age\n");
    scanf("%d",&age);
    printf("enter the sex(M for male and F for female)\n");
    scanf("%c",&sex);
    if((h=="excellence")&&(live=="city")&&((age>25)&&(age<35))&&(sex=='M'))
    {
        printf("person should be ensured\n");
        printf("premium amount is 4 lakh per thousand\n");
        printf("policy amount not exceed 2 lakh");
    }
    else if((h=="excellenc")&&(live=="city")&&((age>25)&&(age<35))&&(sex=='F'))

     {

      printf("person should be ensured\n");
        printf("premium amount is 3 lakh per thousand\n");
        printf("policy amount not exceed 1 lakh");
     }
    else if((h=="poor")&&(live=="village")&&((age>25)&&(age<35))&&(sex=='M'))
    {


        printf("premium amount is 6 lakh per thousand\n");
        printf("policy amount not exceed 10 thousand");
    }
    else
	    printf("person is not ensured\n");
     return 0;
}
