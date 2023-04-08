#ifndef DISH_H
#define DISH_H
#include <string>
#include <QString>
using namespace std;

class dish
{
public:
    int index;
    string name;
    double price;
    dish();
    QString* getOrders_name(int);
    double* getOrders_prc(int);
};

#endif // DISH_H
