#include <stdio.h>
struct Dmart{
char item_name[20];
int id;
int quantity;
float MRP;
};
int main()
{
    struct Dmart D[10] = {
        {"grocery", 101, 5, 50},
        {"clothes", 102, 10, 250},
        {"electronic", 103, 6, 560},
        {"so_drink", 104, 7, 50},
        {"foot_wear", 105, 8, 500},
        {"chocolate", 106, 2, 30},
        {"Dahi", 107, 4, 35},
        {"Milk", 108, 9, 30},
        {"Paneer", 109, 12, 110},
        {"books", 110, 13, 220}
    };
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
    printf("\t\t\t\t\t%s\t\t\t\t\t%d\t\t\t\t\t%d\t\t\t\t\t%f\n",D[i].item_name,D[i].id,D[i].quantity,D[i].MRP);

}

}
else if(choice==2)
{
int id_input;
printf("enter the product id=");
scanf("%d",&id_input);

for(int i=0;i<10;i++)
{
if (id_input==D[i].id)
{
    int input_quantity;
    printf("enter the quantity=");
    scanf("%d",&input_quantity);
    if(input_quantity>D[i].quantity)
    {
        printf("item is not avialble as much you want\n");
    }
    else if(input_quantity<=D[i].quantity)
    {
        printf("item is avilable\n");
        total_cost=input_quantity*D[i].MRP;
        printf("Added to the cart and total cost=%f",total_cost);
        D[i].quantity=D[i].quantity-input_quantity;
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