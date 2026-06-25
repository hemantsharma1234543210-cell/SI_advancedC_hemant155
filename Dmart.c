#include <stdio.h>
int main()
{
char item_name[10][10]={"grocery","clothes","electronic","so_drink","foot_wear","chocolate","Dahi","Milk","Paneer","books"};
int id[10]={101,102,103,104,105,106,107,108,109,110};
int quantity[10]={5,10,6,7,8,2,4,9,12,13};
float MRP[10]={50,250,560,50,500,30,35,30,110,220};

int choice;

do{
    printf("\t\t\t\tMenu\t\t\t\t\n");
printf("1.view_inventory_stock\n2.purchase_items\n3.checkout & exits\n");
printf("enter your choice=");
scanf("%d",&choice);
while(choice<1||choice>3)
{
    printf("invalid choice\n");
    printf("1.view_inventory_stock\n2.purchase_items\n3.checkout & exits\n");
    printf("enter your choice=");
    scanf("%d",&choice);
    if(choice>=1&&choice<=3)
    break;
}
float total_cost;
if(choice==1)
{
//display stock availabilty
printf("\t\t\t\t\tItem_name\t\t\t\t\tID\t\t\t\t\tQuantity\t\t\t\t\tMRP\n");
for(int i=0;i<10;i++)
{
    printf("\t\t\t\t\t%s\t\t\t\t\t%d\t\t\t\t\t%d\t\t\t\t\t%f\n",item_name[i],id[i],quantity[i],MRP[i]);

}

}
else if(choice==2)
{
int id_input;
printf("enter the product id=");
scanf("%d",&id_input);

for(int i=0;i<10;i++)
{
if (id_input==id[i])
{
    int input_quantity;
    printf("enter the quantity=");
    scanf("%d",&input_quantity);
    if(input_quantity>quantity[i])
    {
        printf("item is not avialble as much you want\n");
    }
    else if(input_quantity<=quantity[i])
    {
        printf("item is avilable\n");
        total_cost=input_quantity*MRP[i];
        printf("Added to the cart and total cost=%f",total_cost);
        quantity[i]=quantity[i]-input_quantity;
        //break;
    }
}}
}
else if(choice==3)
{
    printf("=====Receipt=====\n");
    printf("Total amount=%f\n",total_cost);
    printf("Thank you for shopping with us");
    break;

}
//printf("correct choice entered=%d",choice);

}while(choice!=3);
return 0;
}