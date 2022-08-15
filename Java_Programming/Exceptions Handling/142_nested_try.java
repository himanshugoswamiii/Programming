class DemoMain{
    public static void main(String[] args) {
        int sum=0;
        try {
            int x=0;
            try{ 
                int y=0;
                sum=44/y;

            } finally{
                // Either catch or finally is necessary with try
                System.out.println("finally block");
                System.out.println("Sum is:"+sum);
            } 

            sum=12/x;
        }catch (Exception e) {
                System.out.println("Exception caught");
                System.out.println("Sum is:"+sum);
        
        }
        
    }
}
