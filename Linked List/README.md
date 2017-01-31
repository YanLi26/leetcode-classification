#Singly Linked List
##LinkedList()

##LinkedList(int n)
![image](image/LinkList.png)

```c++
p = new LNode(num);
p -> next = head -> next;
head -> next = p;
```
##getData(int i)
![image](image/getData.png)

```c++
while(p && j<i){
	p = p->next;
	++j;
}
```
##insertNode(int i, int element)
![image](image/insertNode.png)

```c++
s -> data = element;
s -> next = p -> next;
p -> next = s;
```
##deleteNode(int i, int &element)
![image](image/deleteNode.png)

```c++
q = p -> next;
p -> next = q -> next;
element = q -> data;
delete q;
```
##mergeList(LinkedList &la, LinkedList &lb)
![image](image/mergeList.png)

```c++
lc.p ->next = lb.p;
lc.p = lb.p;
lb.p = lc.p -> next;
```