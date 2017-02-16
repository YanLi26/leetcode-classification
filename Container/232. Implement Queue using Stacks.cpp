/*
Implement the following operations of a queue using stacks.
push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.
*/

//just change push instead of pop and peek, or time will exceed
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int> tmp;
        while(!myQueue.empty()){
            tmp.push(myQueue.top());
            myQueue.pop();
        }
        myQueue.push(x);
        while(!tmp.empty()){
            myQueue.push(tmp.top());
            tmp.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(myQueue.empty()) return NULL;
        int res = myQueue.top();
        myQueue.pop();
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        return myQueue.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return myQueue.empty();
    }
private:
    stack<int> myQueue;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */