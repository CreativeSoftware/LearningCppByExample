#include <iostream>
#include "product.h"

using namespace std;

void addProduct(Product p);

int main()
{
    Product prod (1921,"title","me", "edi",1932,10.1);

    cout << "price" << endl;
    cout << prod.price()<< endl;

    prod.setAuthor("new author");
    cout << prod.author() << endl;
//    cout << prod.title() << "\n";

    return 0;
}

//void addProduct(Product p){

//    cout << "Insert product data" << endl;
//    cout << "Bar Code "<< endl;
//    cin >> p.setBarCode();

//}
