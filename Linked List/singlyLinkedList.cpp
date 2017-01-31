#include <iostream>
using namespace std;

class LinkedList{
public:
    LinkedList();
    LinkedList(int n);
    bool getData(int i, int &element);
    bool insertNode(int i, int element);
    bool deleteNode(int i, int &element);
    void mergeList(LinkedList &lb, LinkedList &lc);
    void print();
    void clear();
private:
    struct LNode{
        int data;
        struct LNode *next;
        LNode(const int& d):data(d),next(NULL){}
    };
    struct LNode *head;
    struct LNode *p;
};

//Constructor: create head node
LinkedList::LinkedList(){
    head = new LNode(0);
}

//Constructor: create a linked list with head node
LinkedList::LinkedList(int n){
    //the first node is head node
    head = new LNode(0);
    
    //tail to head
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        //new node
        p = new LNode(num);
        p -> next = head -> next;
        head -> next = p;
    }
}

//get element
bool LinkedList::getData(int i, int &element){
    int j = 1;
    p = head -> next;
    while(p && j<i){
        p = p->next;
        ++j;
    }
    if(!p || j>i) return false;
    element = p->data;
    return true;
}

//insert node
bool LinkedList::insertNode(int i, int element){
    p = head;
    struct LNode *s = new LNode(0);
    int j = 0;
    while(p && j < i-1){p = p -> next; ++j;}
    if(!p) return false;
    s->data = element;
    s -> next = p -> next;
    p -> next = s;
    return true;
}

//delete node
bool LinkedList::deleteNode(int i, int &element){
    p = head;
    int j = 0;
    struct LNode *q;
    while(p -> next && j < i-1){
        p = p->next;
        ++j;
    }
    if(!(p -> next)) return false;
    q = p -> next;
    p -> next = q -> next;
    element = q -> data;
    delete q;
    return true;
}

//merge linked list
//merge lb to a linked list in order, lc is the result
void LinkedList::mergeList(LinkedList &lb, LinkedList &lc){
    p = head -> next;
    lb.p = lb.head -> next;
    lc.head = head;
    lc.p = head;
    while(p && lb.p){
        if(p -> data <= lb.p -> data){
            lc.p -> next = p;
            lc.p = p;
            p = p -> next;
        }
        else{
            lc.p ->next = lb.p;
            lc.p = lb.p;
            lb.p = lc.p -> next;
        }
    }
    if(p) lc.p -> next = p;
    else lc.p -> next = lb.p;
    delete lb.head;
}

//print
void LinkedList::print(){
    for(p = head -> next; p; p = p -> next){
        cout << p -> data << endl;
    }
}

//clear()
void LinkedList::clear(){
    //clear from head node
    p = head;
    while(p){
        LNode *q = p -> next;
        delete p;
        p = q;
    }
}

int main(int argc, const char * argv[]) {
    int element;
    LinkedList la(3);
    LinkedList lb(4);
    LinkedList lc;
    la.insertNode(1, 0);
    lb.deleteNode(1, element);
    la.mergeList(lb, lc);
    lc.print();
    lc.clear();
    return 0;
}
