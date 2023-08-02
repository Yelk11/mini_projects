#include "list_manager.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char* argc[]){
    list_T *list = init_list();
    bool isRunning = true;
    int option;
    char* item = "";
    printf("Welcome to the TODO list\n");
    printf("1: Add item to list\n");
    printf("2: Remove item from list\n");
    printf("3: print TODO list\n");
    printf("0: exit\n");
    while(isRunning == 1)
    {
        scanf("%d", &option);
        switch(option)
        {
            case 0:
                isRunning = 0;
                break;
            case 1:
                printf("What would you like to add?\n");
                scanf("%s", item);
                list_add(list, item);
                list_print(list);
                break;
            case 2:
                printf("What index do you want to delete?\n");
                scanf("%d", &option);
                list_remove(list, option);
                break;
            case 3:
                list_print(list);
                break;

        }
    }
}




