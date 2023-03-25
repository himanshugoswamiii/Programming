import java.io.*;
class DemoFileInfo{

    static void checkPermissions(File myObj){
        // File Permissions
        if (myObj.canRead()) {
            System.out.println("Reading permissions are available");
        }
        else{
            System.out.println("Reading permissions are not available");
        }

        if (myObj.canWrite()) {
            System.out.println("Writing permissions are available");
        }
        else{
            System.out.println("Writing permissions are not available");
        }

        if (myObj.canExecute()) {
            System.out.println("Executable permissions are available");
        }
        else{
            System.out.println("Executable permissions are not available");
        }

    }
    public static void main(String[] args) {
        try {
            File myObj=new File("newfile.txt");
            checkPermissions(myObj);

            // Now let's give the permission
            myObj.setExecutable(true);
            
            checkPermissions(myObj);

            if(myObj.setExecutable(false)){
                System.out.println("\nExecutable Permissions set : false");
            }
            checkPermissions(myObj);
            
        } catch (Exception e) {
            System.out.println("Some Error Occured");
        }
    }
}
