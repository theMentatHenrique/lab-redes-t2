
#define MSG_SIZE	128
struct process {
    char name[MSG_SIZE];
    int pid;
};

struct topic {
	char message[MSG_SIZE];
	short size;
};

int list_add_entry(const char *data);
void list_show(void);
int list_delete_head(void);
int list_delete_entry(char *data);
