abstract class first {
    final int myval=20;
    int var2=50;
    final int myfunc(int x,int y){
        return x+y;
    }
    int mul(int x,int y){
        return x*y;
    }
}

class second extends first{
    int newvar=45;
    int division(int x,int y){
        return x/y;
    }

}

class mine{
    public static void main(String[] args) {
        //first myObj=new first(); // We cant' make object of abstract class
        second myObj=new second();
        System.out.println(myObj.myval);
        int x=myObj.mul(7,20);
        int y=myObj.division(7,20);
        System.out.println("Multiplication is: "+x);
        System.out.println("Quotient is: "+y);
    }
}