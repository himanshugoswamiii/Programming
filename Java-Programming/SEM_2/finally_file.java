import java.io.File;
import java.io.IOException;
public class finally_file {
    public static void main(String[] args) {
        try {
            File myObj=new File("filename.txt");
            if (myObj.createNewFile()) {
                System.out.println("File created: "+myObj.getName());
            }
        } catch (Exception e) {
            //TODO: handle exception
        }

        finally{
            myObj.close();
        }


        
        
    }
    
}

