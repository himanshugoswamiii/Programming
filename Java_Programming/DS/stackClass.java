interface Stack {
    // accessor methods
    public int size();
    public boolean isEmpty();
    public Object top();

    // update Methods
    public void push(Object element);
    public Object pop();
    
}
class ArrayStack implements Stack {
    public static final int CAPACITY=1024; // Default capacity of the stack
    private int N;
    private Object S[]; // S holds the elements of the stack
    private int t=-1; // top element of the stack
    public ArrayStack(){ // Initialize the stack with default capacity
        this(CAPACITY);
    }

    public ArrayStack(int cap){ // Initialize the stack with given capacity
        N=cap;
        S=new Object[N];
    }

    public int size(){
        return t+1;
    }

    public boolean isEmpty(){
        if (t<0){
            return true; // it'll return 0 if t<0
        }
        else
            return false;
    }

    /* public void push(Object obj) throws StackFullException{
        if (size()==N){
            throw new StackFullException("Stack Overflow");
        }
        S[++t]=obj;
    }

    public Object top() throws StackEmptyException{
        if (isEmpty())
            throw new StackEmptyException("Stack is Empty");
        return S[t];
    }

    public Object pop() throws StackEmptyException{
        if (isEmpty())
            throw new StackEmptyException("Stack is Empty");
        elem=S[t];
        S[t--]=null;
        return elem;
    } */

    public void push(Object obj){
        if (size()==N){
            System.out.println("Size is full");
            System.exit(0);

        }
        S[++t]=obj;
    }

    public Object top(){
        if (isEmpty())
            System.out.println("Stack is Empty");
            System.exit(0);
        return S[t];
    }

    public Object pop(){
        Object elem;
        if (isEmpty())
            System.out.println("Stack is Empty");
            System.exit(0);
        elem=S[t];
        S[t--]=null;
        return elem;
    }

}


// Driver's Class
public class stackClass {
        
    public static void main(String[] args){
        System.out.println("What is this"); 
        ArrayStack myArr=new ArrayStack();
        System.out.println("Array is empty: "+myArr.isEmpty());
        myArr.push(20);
        System.out.println("Array is empty: "+myArr.isEmpty());

    }
    }

