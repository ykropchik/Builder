#include <iostream>
#include "src/carBuilder.h"

int main() {
    Order *order;
    CarBuilder builder;
    builder.setBodyColor(BODY_COLOR::VENTURA_ORANGE);
    builder.setInterior(INTERIOR::LUXURY_NATURAL_TAN);
    builder.setCalipersColor(CALIPERS_COLOR::RED_BLACK_LOGO);
    order = builder.makeOrder();
    order->printOrder();

    return 0;
}
