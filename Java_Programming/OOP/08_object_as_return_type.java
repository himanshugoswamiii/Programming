class Abc{
    int a,b;

    Abc create_ob(){
        // Function that creates an object
        Abc o=new Abc();
        o.a=10;
        o.b=20;
        return o;
    }
}

// Main class
class DemoMain{
    public static void main(String[] args) {
        Abc myObj;
        // ERROR : You need to initialize object of other class
        myObj.create_ob();
        System.out.println("a is: "+myObj.a);
        
    }
}
