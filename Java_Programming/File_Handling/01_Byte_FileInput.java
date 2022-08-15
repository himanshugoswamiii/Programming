import java.io.*;
class DemoFileInput{
    public static void main(String[] args )throws IOException {
        // Here The exception is important
        FileInputStream fin=null;
        try {
            fin=new FileInputStream("newfile.txt");
            // Opens a file "newfile.txt"

            int c;
            char b;
            while ((c=fin.read())!=-1) {
                b=(char)c;
                System.out.println(b);
            }
        }
        finally{
            if (fin!=null) {
                fin.close(); // Closing the file
            }
        }
        
    }
}
