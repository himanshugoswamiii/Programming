import java.io.*;
class DemoCreateFile{
    public static void main(String[] args) {
        try {
            File myFile=new File("basics.txt");
            if(myFile.createNewFile()){
                System.out.println(myFile.getName()+" created");
            }
            else{
                System.out.println("File already exists");
            }
        } catch (Exception e) {
            System.out.println("An Error occured");
        }
    }
}
