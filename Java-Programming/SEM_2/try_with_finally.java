class TryWithFinally {
    public static void main(String[] args) {
      try {
         System.out.println("Try Block");
      } finally {
         System.out.println("Finally Block always execute");
      }
    }
}
