#include <stdio.h>

//(
    struct product {
        int ID;
        char name[16];
        int quantity;
        float price;
    };
//)


//(
    struct products {
        int size;
        struct product array[20];
    };

    void products_init(struct products* Products){
        *Products.size = 0;
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
    return 0;
}
