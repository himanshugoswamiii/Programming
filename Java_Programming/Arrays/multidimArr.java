public class multidimArr {
    public static void main(String[] args) {
        // Note at double [] in case of multi-dimensional array
        int myArr[][]={
        {10,20},
        {30,40,50},
        {60,70,80,90,100}
        };

        // Printing the Array
        for (int i = 0; i < myArr.length; i++) {
            for (int j = 0; j < myArr[i].length; j++) {
                System.out.print(myArr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
