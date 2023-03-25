import java.io.*;
class DemoOutput{
    public static void main(String[] args)throws IOException {
        //For file output
        FileWriter fout=null;

        try{
            fout=new FileWriter("output.txt");
            for (int i = 0; i < 5; i++) {
                fout.write(i);
                // Writing to the file
            }
        }
        finally{
            fout.close();
        }
        
    }
}
