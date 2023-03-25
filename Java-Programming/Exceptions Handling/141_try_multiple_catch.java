class DemoMain{
    public static void main(String[] args) {
        int x=0,rem=0;
        try {
            rem=44%x;
        } catch (Exception e) {
            System.out.println("In Exception");
            System.out.println("rem is: "+rem);
        } catch (ArithmeticException e){
            System.out.println("In Throwable");
        }
    }
}
