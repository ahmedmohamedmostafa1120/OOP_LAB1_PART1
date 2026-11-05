#include <cstdio>
#include <iostream>

#include "../include/lib.hpp"
using namespace std;
using namespace liba;
int main() {
    display(5, 10, "Menu", Color::YELLOW);
    display(6, 10, "Display settings");
    display(7, 10, "Sound settings" );
    display(8, 10, "Exit", Color::YELLOW);
    return 0;
}