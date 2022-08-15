public class operators {
    public static void main(String[] args) {
        // Bitwise Operators
        int x=8^10; // XOR Operator
        // 8 = 1000 , 10 = 1010 , 8 ^ 10 = 0010 (2)
        System.out.println(x); // 2

        int y=8&10;
        // 8 & 10 = 1000 (8)
        System.out.println(y); // 8

        int z=8|10;
        // 1010 (10)
        System.out.println(z); // 10

        // ---- SIGNED RIGHT SHIFT -----
        int w=8>>2;
        // 1000 when shifted 2 bits to right = 0010
        System.out.println(w); // 2

        System.out.println("-32 binary representation = "+Integer.toBinaryString(-32));
        //11111111.11111111.11111111.11111000

        System.out.println((-8)>>5); // -2
        System.out.println("-8 >> 5 (-2) binary representation = "+Integer.toBinaryString(-32 >> 3));
        //11111111.11111111.11111111.11111110

        // --- UNSIGNED RIGHT SHIFT ---
        System.out.println(8>>>2);
        System.out.println((-8)>>>2); //  1073741822
        System.out.println("-8 >>> 2 binary representation = "+Integer.toBinaryString(1073741822));
        // 00111111.11111111.11111111.11111110

        // -- SIGNED LEFT SHIFT ---
        System.out.println(8<<2); // 32
    }
}
