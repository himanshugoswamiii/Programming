class MulMatrix{
    public static void main(String[] args) {
        int matrix1[][]={
        {1,2,3},
        {2,3,4},
        {6,7,8}
        };

        int matrix2[][]={{1,1,1},{1,1,1},{1,1,1}};

        int newMatrix[][]=new int[3][3]; // Declaration along with Memory allocation

        for (int i = 0; i < newMatrix.length; i++) {
            for (int j = 0; j < newMatrix[0].length; j++) {
                newMatrix[i][j]=matrix1[i][0]*matrix2[0][i] + matrix1[i][1]*matrix2[1][i] + matrix1[i][2]*matrix2[2][i];

                
            }
        }

        for (int index = 0; index < 3; index++) {
            for (int i = 0; i < 3; i++) {
                System.out.print(newMatrix[index][i]);
                System.out.print(" ");
            }
            System.out.println();
            
        }
    }
}
