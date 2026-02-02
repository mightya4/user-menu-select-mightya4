#include "menu-utils.h"

int main() {
    int user_select = 0;
    int window_size = 1;
    do {
        if(user_select == 0) {
            display_menu();
            printf("Press 9 to display menu selection options\n");
        }
        
        scanf("%d", &user_select);
        switch(user_select){
            case 0:
                close();
                return 0;
                break;
            case 1:
                display_menu();
                display_file_menu();
                break;
            case 2:
                display_menu();
                display_edit_menu();
                break;
            case 3:
                display_menu();
                display_view_menu();
                break;
            case 4:
                max_win(&window_size);
                break;
            case 5:
                min_win(&window_size);
                break;
            case 9:
                display_select_options();
                break;
            default:
                display_select_options();
        }
    } while (user_select != 0);

    return 0;
}