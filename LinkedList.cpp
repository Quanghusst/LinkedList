#include <iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * MakeNode(int x){
    node * new_node = new node();
    new_node->data = x;
    new_node->next = NULL;
    return new_node;
}
void duyet(node *head){
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void pushFront(node **head, int x){
    node * new_node = MakeNode(x);
    new_node->next = *head;
    *head = new_node;
}
int main (){
    node * head = NULL;
    return 0;
}