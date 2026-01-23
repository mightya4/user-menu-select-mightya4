#include "menu-utils.h"

void display_menu() {
    printf("\n---------------------------------\n");
    printf("File | Edit | View       -  o  x\n");
    printf("---------------------------------\n\n");

}

void display_select_options(){
    printf("--Menu selection--\nTo open menu enter the following numbers \n(1) File Menu\n(2) Edit Menu\n(3) View Menu\n(4) Minimize Winow\n(5)Maximize Window\n(0)Exit Application");
}

void close() {
    printf("Exiting Application...\n");
}
void max_win(int *ptr) {
    if(*ptr == 0) {
    *ptr = 1;
    printf("Maximizing window...\n");
    } else {
        printf("Window is already Maximized\n");
    }
    
}
void min_win(int *ptr) {
    if(*ptr == 1) {
    *ptr = 0;
    printf("Minimizing window...\n");
    } else {
        printf("Window is already Minimized\n");
    }
}
