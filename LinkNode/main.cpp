
struct Node {
    int data;
    Node *next;
};

void subtract(Node *p, Node *q) {

    Node *pre = nullptr;

    while(p->next && q->next) {
        if (p->data > q->data) {
            q = q->next;
        } else if (p->data < q->data) {
            pre = p;
            p = p->next;
        } else {
            Node *freenode = p;
            p = p->next;
            q = q->next;
            pre->next = p;
            free(freenode)
        }
    }


}


int main()
{

    return 0;
}
