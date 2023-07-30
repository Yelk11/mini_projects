#include "list_manager.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

list_T* init_list()
{
    list_T* list = calloc(1, sizeof(list_T));
    list->num_tasks = 0;
    return list;
}

void list_add(list_T* list, char* item)
{
    
    if(list->num_tasks <= MAX_TASKS)
    {
        strcpy(list->tasks[list->num_tasks], "item");
        list->num_tasks++;
    }
    else
    {
        printf("List is full\n");
    }
    printf("%s\n",list->tasks[list->num_tasks]);
}

void list_remove(list_T* list, int index)
{

}

void list_print(list_T* list)
{
    printf("hey\n");
    for(int x = 0; x > list->num_tasks; x++)
    {
        printf("%d: %s\n", x + 1, list->tasks[x]);
    }
}

