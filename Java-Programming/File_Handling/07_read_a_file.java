import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

class ReadFile{
    public static void main(String[] args) {
        try {
            File myFile=new File("basics.txt");
            Scanner reader=new Scanner(myFile);
            String data;
            while (reader.hasNextLine()) {
                data=reader.nextLine();
                System.out.println(data);
            }

            reader.close();
            
        } catch (FileNotFoundException e) {
            System.out.println("An Error Occured");
        }
    }
}
