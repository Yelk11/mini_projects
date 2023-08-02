
#define MAX_TASKS 100


typedef struct list_T{
    char* tasks[MAX_TASKS];
    int num_tasks;
}list_T;

list_T* init_list();

void list_add(list_T* list, char* item);

void list_remove(list_T* list, int index);

void list_print(list_T* list);