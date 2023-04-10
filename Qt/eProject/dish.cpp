#include "dish.h"
#include <string>
#include <QString>
using namespace std;

dish::dish()
{

}

QString* dish::getOrders_name(int n = 5) {
    QString* names = new QString[n];
    names[0] = "dish 1";
    names[1] = "dish 2";
    names[2] = "dish 3";
    names[3] = "dish 4";
    names[4] = "dish 5";
    return names;
}

double* dish::getOrders_prc(int n = 5) {
    double* prices = new double[n];
    for (int i = 0; i < 5; i++) {
        prices[i] = i + 10;
    }
    return prices;
}
