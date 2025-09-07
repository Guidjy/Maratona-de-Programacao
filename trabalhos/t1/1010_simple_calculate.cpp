#include <iostream>
#include <stdio.h>

using namespace std;


struct _product {
    int code;
    int n_units;
    double price;
};
typedef _product Product;


int main(){
    Product p1, p2;
    cin >> p1.code >> p1.n_units >> p1.price >> p2.code >> p2.n_units >> p2.price;
    double total = p1.n_units * p1.price + p2.n_units * p2.price;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}