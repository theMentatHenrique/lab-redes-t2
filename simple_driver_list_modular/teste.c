#include <linux/list.h>
#include <linux/slab.h>
#include "list_driver.h"

struct process {
    int pid;
};

struct message {
    char content[5000];
};

struct message_process {
    int pid;
    struct list_head message_list;
}

struct topic {
    int id;
    struct list_head message_process_list;
};

struct broker {
    struct list_head topic_list;
}


/*
    list_head é um nodo de uma lista duplamente encadeada.
    não tem tipo !!!! especificamos quando formos dar malloc com o tipo que queremos salvar

*/

