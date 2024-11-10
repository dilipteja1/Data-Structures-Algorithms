public class memory {
    // this will be stored in stack of memory class
    int a =10;

    //this method will be stored in heap memory
    public void method1()
    {
        int b =10;
        System.out.println("This is first method");
    }

    public static void main(String args[])
    {
        System.out.println("Main method.");
        // method1();
    }

}


