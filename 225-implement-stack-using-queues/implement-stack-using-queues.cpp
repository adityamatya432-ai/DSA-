class MyStack {
public:
    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);

        int n = q.size();

        // naye element ko front par lao
        for(int i = 0; i < n - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int t = q.front();
        q.pop();
        return t;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};