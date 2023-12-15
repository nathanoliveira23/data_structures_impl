struct node {
    int data;
    node* next;
};

node* new_linked_list();
void insert_begin(node* list, int value);
void insert_end(node* list, int value);
void remove_begin(node* list);
void remove_element(node* list, int value);
void erase(node* list);
node* search(node* list, int value);
void print(node* list);
bool is_empty(node* list);