import java.io.*;
class DemoFileInfo{
    public static void main(String[] args) {
        try {
            File myObj=new File("newfile.txt");
            
            // File Information
            System.out.println("File name is: "+myObj.getName());
            System.out.println("File Path is: "+myObj.getPath());
            System.out.println("getParent() is: "+myObj.getParent());
            System.out.println("File last modified: "+myObj.lastModified());
            System.out.println("length() returns "+myObj.length());
        } catch (Exception e) {
            System.out.println("Some Error Occured");
        }
    }
}
