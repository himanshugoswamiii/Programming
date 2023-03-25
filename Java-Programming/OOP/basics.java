class myclass{
    int x;
    int y;
    myclass(int a,int b){
        // Constructor
        x=a;
        y=b;
    }

    void printval(){
        System.out.println("x is: "+x);
        System.out.println("y is: "+y);
    }
}
public class basics {
    public static void main(String[] args) {
        myclass obj=new myclass(1,2);
        obj.printval();
    }
    
}
