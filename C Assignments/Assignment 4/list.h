//a recursive data type function
//serves as the nodes of a list

typedef struct node
{
	int id;
	char* name;
	struct node* next;	
}node;


//create an empty list

void create_list(node** head);

//add a new mode to the front of the list
void add_front(node** head, node* new_node);

//add a new node to the end of teh list
void add_end(node** head, node* new_node);

//remove and return the node at the front of the list or NULL if empty
node* rem_front(node** head);

//remove and return the node at the end of the list or NULL if empty
node* rem_end(node** head);

//return the number of nodes in the list
int list_len(node* head);

//print the data values of all the nodes in the list (from start to end)
void print_list(node* head);

void free_node1(node* head);

void free_list(node** head);

