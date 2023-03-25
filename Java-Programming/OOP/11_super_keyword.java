class A{
    // superclass
    int i=10;
}


class B extends A{
    int i=100;
    // subclass
    void showw(){
        System.out.println("Value of super i: "+super.i);
        // Using super to access a member of the super class
        System.out.println("Value of subclass i: "+i);
    }

}

class DemoMain{
    public static void main(String[] args) {
        B myObj=new B();
        myObj.showw();
    }

}
