class MyException extends Exception{
    private int x;
    MyException(int a){
        x=a;
    }
    public String toString(){
        // This method must return a type of string
        return "Exception because of "+x;
    }

}

// Main Class
class Demo{
    void calculate(int a) throws MyException{
        int b=10;
        if (a>10) {
            throw new MyException(a);
        }
        else{
            System.out.println(a+b);
        }
    }

    public static void main(String[] args) {
        Demo myObj=new Demo();
        try {
            myObj.calculate(5);
            myObj.calculate(20);
        } catch (Exception e) {
            System.out.println(e);
        }
        
    }
}
