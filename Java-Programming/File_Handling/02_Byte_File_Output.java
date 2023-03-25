import java.io.*;
class DemoOutput{
    public static void main(String[] args)throws IOException {

        //For file output
        FileOutputStream fout=null;

        try{
            fout=new FileOutputStream("output.txt");
            fout.write("This is my Name");

        }
        finally{
            fout.close();
        }
        
    }
}
