#include "../include/lib.hpp"
#include <cstdio>

 namespace liba{

void goTo(int x, int y) {
    printf("\033[%d;%dH", x, y);
    fflush(stdout); 
}


void setColor(Color color) {
    printf("\033[1;%dm",color);
    fflush(stdout);
}
void print( const char *text) {
    printf("%s", text);
    fflush(stdout);
}
  
void resetColor() {
    printf("\033[0m");
    fflush(stdout);
}
void display(int x, int y,  const char* text, Color color) {
    goTo(x, y);
    setColor(color);
    print(text);
    resetColor();
}
};