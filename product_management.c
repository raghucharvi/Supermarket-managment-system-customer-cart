#include <stdio.h>
#include <stdlib.h>
struct PRODUCT{
    char prod_name[50];
    int prod_id;
    float prod_price;
    int prod_stock; 
};

int main(){
    struct PRODUCT products[100];
    int c=0;

    int choice;
    do{
        printf("\n---PRODUCT MANAGEMENT---\n");
        printf("1. View inventory\n");
        printf("2. Enter new product\n");
        printf("3. Remove product from inventory\n");
        printf("4. Update stock details\n");
        printf("5. Exit\n");
        printf("Enter choice (1-5):");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                for (int i=0; i<c; i++){
                    printf("\nPRODUCT%d\n", i+1);
                    printf("Product Name:%s\n", products[i].prod_name);
                    printf("Product ID:%d\n", products[i].prod_id);
                    printf("Product Price:%.2f\n", products[i].prod_price);
                    printf("Quantity of Product in stock:%d\n", products[i].prod_stock);
                }
                break;

            case 2:
                
                printf("Enter Product Name:");
                scanf("%s", products[c].prod_name);

                printf("Enter Product ID:");
                scanf("%d", &products[c].prod_id);

                printf("Enter Product Price:");
                scanf("%f", &products[c].prod_price);

                printf("Enter Quantity of Product in stock:");
                scanf("%d", &products[c].prod_stock);
                
                c++;
                break;
        
            case 3:{
                int id;
                int found=0;

                printf("Enter product id:");
                scanf("%d", &id);

                for (int i=0; i<c; i++){
                    if (products[i].prod_id==id) {
                        found=1;
                        for (int j=i; j<c-1; j++){
                            products[j]=products[j+1];
                        }
                        c--;
                        printf("PRODUct REMOVED SUCCESSFULLY!");

                }
            }
                if (found==0){
                    printf("PRODUCT NOT found!");
                }
                break;
            
            case 4:{
                int id;
                int new_stock;

                printf("Enter product id:");
                scanf("%d", &id);

                for (int i=0; i<c; i++){
                    if (products[i].prod_id==id){
                        printf("Current stock:%d", products[i].prod_stock);

                        printf("Enter new stock:");
                        scanf("%d", &new_stock);

                        products[i].prod_stock=new_stock;
                    }
              }
              break;
            }
      }}}while (choice!=5);
        return 0;
    }