#include "list_manager.h"


int main(int argv, char* argc[]){
    list_T* list = init_list();
    list_add(list, "go get some tacos");
    list_print(list);
}




