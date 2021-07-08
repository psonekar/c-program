/******************************************************************************

                            Bitwise operator

*******************************************************************************/
#include <stdio.h>
void setlsbbit(int num1)
{
    int i;
    if((num1>>0)&1)
    {
        printf("LSB is set\n");
    }
    else
    printf("LSB is not set\n");
}
void setmsbbit(int num1)
{
    int i;
    if((num1>>3)&1)
    {
        printf("MSB is set\n");
    }
    else
    printf("MSB is not set\n");
}
void setnbit(int num1,int pos1)
{
    int i;
    num1=num1|(1<<pos1);
     printf("setnbit:\n");
    for(i=7;i>=0;i--)
    printf("%d",(num1>>i)&1);
}
void getnbit(int num1,int pos1)
{
    printf("getnbit:%d\n",(num1>>pos1)&1);
}
void clearnbit(int num1,int pos1)
{
    int i;
    num1=num1 & ~(1<<pos1);
    printf("clearnbit:\n");
    for(i=7;i>=0;i--)
    printf("%d",(num1>>i)&1);
}
void togglenbit(int num1,int pos1)
{
    int i;
    num1=num1^(1<<pos1);
    printf("togglenbit:\n");
    for(i=7;i>=0;i--)
    printf("%d",(num1>>i)&1);
    
}
void getlowestsetbit(int num1)
{
    int i=0;
    
    for(i=0;i<=7;i++)
    {
        
       if(((num1>>i)&1)==1)
       {
       printf("getlowestsetbit:%d\n",(i));
       break;
       }
        
    }
    
}
void gethighestsetbit(int num1)
{
    int i=0;
    for(i=7;i>=0;i--)
    {
        if(((num1>>i)&1)==1)
       {
       printf("gethighestsetbit:%d\n",(i));
       break;
       }
    }
    
}
void filpbits(int num1)
{
    int i;
    num1=num1^(0xff);
   for(i=7;i>=0;i--)
    printf("%d",(num1>>i)&1);
}

void countzeroandone(int num1)
{
int zero=0,one=0,i;
for(i=0;i<=7;i++)
    {
        
       if(((num1>>i)&1))
       {
       one++;
       }
        else
        zero++;
    }
    printf("noofzero:%d\n",zero);
    printf("noofone:%d",one);
}
void swaptwonum(int num1,int num2)
{
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("num1:%d,num2:%d\n",num1,num2);
}
void findevenodd(int num1)
{
    if(num1&1)
    printf("number is odd\n");
    else
    printf("number is even\n");

}
void rotateleft(int num1,int pos1)
{
    int num2;
    num2=num1<<pos1;
    printf("rotateleft:%d",num2);
}
void rotateright(int num1,int pos1)
{
    int num2;
    num2=num1>>pos1;
    printf("rotateright:%d",num2);
}

int main()
{
    int num,pos,choice;
   printf("\n.....menu...........\n");
    printf("1.setlsbbit\n2.setmsbbit\n3.setnbit\n4.getnbit\n5.clearnbit\n6.togglenbit\n7.gethighestsetbit\n8.getlowestsetbit\n9.filpbits\n10.countzeroandone\n11.swaptwonum\n12.findevenodd\n13.rotateleft\n14.rotateright");
     printf("\nEnter the number and position\n");
    scanf("%d%d%d",&num,&pos,&choice);
   //scanf("%d",&choice);
  switch(choice)
   {
   case 1:setlsbbit(num);
            break;
    case 2:setmsbbit(num);
            break;
    case 3:setnbit(num,pos);
            break;
    case 4:getnbit(num,pos);
            break;
    case 5:clearnbit(num,pos);
            break;
    case 6:togglenbit(num,pos);
            break;
    case 7:gethighestsetbit(num);
            break;
    case 8:getlowestsetbit(num);
            break;
    case 9:filpbits(num);
            break;
    case 10:countzeroandone(num);
            break;
    case 11:swaptwonum(num,pos);
            break;
    case 12:findevenodd(num);
            break;
    case 13:rotateleft(num,pos);
            break;
    case 14:rotateright(num,pos);
            break;
   }     
    return 0;
}

