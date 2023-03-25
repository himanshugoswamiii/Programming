class himanshu{
    final int myval=20;
    int var2=50;
    final int myfunc(int x,int y){
        return x+y;
    }
    int mul(int x,int y){
        return x*y;
    }
}

class second extends himanshu{
    float myfunc(float y,float x){ // Function overloading
        return x+y;
    }
    // int myfunc(int x,int y){ // Function overriding not possible :ERROR
    //     return x*y;
    // }
    int mul(int x,int y){ // Function overriding possible for non-final
        return x+y;
    }
    void print(){
        // We can access final variable
        System.out.println(myval);
    }
    void change(){
        // myval+=1; // ERROR : We can't change final variable
        var2+=100; // We can chagne normal variable
        System.out.println(myval);
        System.out.println(var2);

    }

}

class ok{
    public static void main(String[] args) {
        //himanshu myObj=new himanshu(); // creating object
        //System.out.println(myval);
        second myObj2=new second();

        float ans=myObj2.myfunc(5.8f,6.9f);
        System.out.println("the sum of 5 and 6 is: "+ans);
        myObj2.print();
        myObj2.change();
        //int ans=himanshu.myfunc(5,6);
}
}