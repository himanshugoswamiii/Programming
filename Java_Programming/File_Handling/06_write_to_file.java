import java.io.*;
class DemoWriteFile{
    public static void main(String[] args) {
        try {
            FileWriter myObj=new FileWriter("basics.txt");
            myObj.write("This is my name");
            myObj.close(); // Closing the File
        } catch (IOException e) {
            System.out.println("An Error Occured");
        }
    }
}
