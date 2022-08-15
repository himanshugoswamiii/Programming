import java.io.File;
class DeleteFile{
    public static void main(String[] args) {
        File myObj=new File("basics.txt");
        if(myObj.delete()){
            System.out.println("File Deleted Successfully");
        }
        else{
            System.out.println("file isn't found");
        }
    }
}
