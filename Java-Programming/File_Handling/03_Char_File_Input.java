import java.io.*;
class DemoFileInput{
    public static void main(String[] args) throws IOException{
        FileReader fin=null;
        try {
            fin=new FileReader("newfile.txt");
            int c;
            while ((c=fin.read())!=-1) {
                System.out.println((char)c);
            }

            
        } catch (Exception e) {
            System.out.println("File not Found");
        }
        finally{
            if(fin!=null){
                fin.close();
            }
        }

    }
}
