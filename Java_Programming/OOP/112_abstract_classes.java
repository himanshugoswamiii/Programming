abstract class A{
    void display(){
        System.out.println("This is display");
    }

    abstract int sum(int x,int y);
}

class DemoMain extends A{
    int sum(int x,int y){
        // Implementing the abstract function
        return x+y;
    }

    public static void main(String[] args) {
        DemoMain myObj=new DemoMain();
        int sum=myObj.sum(10, 20);
        System.out.println("Sum is: "+sum);
        myObj.display();
    }


}
