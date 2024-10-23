#include <stdio.h>

//(
    struct product {
        int ID;
        char name[16];
        int quantity;
        float price;
    };
    void product_init(struct product* PRODUCT, int id, char name [], int quantity, float price){
        PRODUCT->ID = id;
        int i = 0;
        while(name[i] != '\0'){
            PRODUCT->name[i] = name[i];
            i = i + 1;
        }
        (*PRODUCT).name[i] = '\0';
        PRODUCT->quantity = quantity;
        PRODUCT->price = price;
    }
    void product_display(struct product* PRODUCT){
        printf("\n name is: %s", (*PRODUCT).name);
        printf("\n id is: %d", (*PRODUCT).ID);
        printf("\n quantity : %d", (*PRODUCT).quantity);
        printf("\n price : %f", (*PRODUCT).price);
    }
//)


//(
    struct products {
        int size;
        struct product array[20];
    };

    void products_init(struct products* Products){
        Products->size = 0;
    }

    void add_product(struct products* Products, struct product Product){
        Products->array[Products->size] = Product;
        Products->size = Products->size + 1;
    }
//)

int main(){
    struct product products[20];
    printf("hello world");
    struct product pineapple;
    pineapple.ID = 2;
    printf("\n%d", pineapple.ID);
    struct products PRODUCTS;
    products_init(&PRODUCTS);
    add_product(&PRODUCTS, pineapple);
    printf("\n%d", PRODUCTS.array[0].ID);
    struct product PRODUCT2;
    product_init(&PRODUCT2, 11, "orange", 7, 1.50);
    printf("\n%d", PRODUCT2.quantity);
    product_display(&PRODUCT2);
    return 0;
}
