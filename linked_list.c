#include <stdio.h>
#include <stdlib.h>

struct node_t {
	struct node_t * next;
	int data;
};

struct node_t * create_node (int data) {
	struct node_t * node = malloc(sizeof(int)); 
	node -> next = NULL;
	node -> data = data;
	return node;
}

struct node_t * add_head (struct node_t * head, struct node_t * node) {
	node -> next = head;
	head = node;
	return head;
}

void delete_list(struct node_t * head) {
	struct node_t * tmp;
	while (head != NULL) {
		free(head); 
		tmp = head -> next;
		head = tmp;
	}
}

void print_list(struct node_t * head) {
	struct node_t * tmp; 
	while (tmp != NULL) {
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}



/////////////////////////////////////////////////////////////////////



int set_tail(struct node_t * head, struct node_t *tail) {
	//your code goes here

	return -1;
}

void delete_duplicates(struct node_t * head) {
	//your code goes here
	
}


int main() {
	int arr1[] = {1, 2, 3, 124, 5, 4, 3, 2, 1};
	int arr2[] = {1, 72, 1, 2, 5, 117, 2, 5, 8, 6, 4, 2, 8};
	struct node_t * head1, * head2, * tail1, * tail2;
	int i;

	head1 = head2 = NULL;
	tail1 = tail2 = NULL;

	for (i = 0; i < sizeof(arr1)/sizeof(int); i++)
		head1 = add_head(head1, create_node(arr1[i]));

	for (i = 0; i < sizeof(arr2)/sizeof(int); i++)
		head2 = add_head(head2, create_node(arr2[i]));

	printf("List 1:\n");
	print_list(head1);
	printf("List 2:\n");
	print_list(head2);


	printf("\nThe tail data of list one is %d.\n", set_tail(head1, tail1));
	printf("The tail data of list two is %d.\n", set_tail(head2, tail2));


	delete_duplicates(head1);
	delete_duplicates(head2);

	printf("\nAfter duplicates have been deleted:\n");
	printf("List 1:\n");
	print_list(head1);
	printf("List 2:\n");
	print_list(head2);

	printf("\nThe tail data of list one after deleting duplicates is %d.\n", 
					set_tail(head1, tail1));
	printf("The tail data of list two after deleting duplicates is %d.\n", 
					set_tail(head2, tail2));

	delete_list(head1);
	delete_list(head2);
	return 0;
}
