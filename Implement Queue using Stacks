class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        s1.push(x);    
    }

    // Removes the element from in front of queue.
    void pop(void) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
        
        // now revert
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int result = s2.top();
        
        // now revert
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return result;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return s1.empty() && s2.empty();
    }
    
private:
    std::stack<int> s1;
    std::stack<int> s2;
};
