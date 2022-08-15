class Abc{
    void test() {
        System.out.println("No parameters");
    }
    void test(int a) {
        System.out.println("a: " + a);
    }
    void test(int a, int b) {
        System.out.println("a and b: " + a + " " + b);
    }
    double test(double a) {
        System.out.println("double a: " + a);
        return a*a;
    }
    public static void main(String[] args) {
        Abc ob=new Abc();
        double result;
        ob.test();
        ob.test(10);
        ob.test(10, 20);
        result = ob.test(11.10);
        System.out.println("Result of ob.test(11.10): " + result);
    }
}
