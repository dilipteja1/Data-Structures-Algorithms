public class Strings {
    public static void main(String args[])
    {
        //Strings cannot be changed. they are fixed
        //by defuault strings are immutable
        String s = "Dilip";
        System.out.println(s.charAt(1));
        
        // String buffers. these are mutable strings. it always keeps 16bit buffer 

        StringBuffer sb = new StringBuffer("Dilip");
        sb.append(" Teja");
        
        sb.insert(0, "Polamarasetty ");
        System.out.println(sb);
        System.out.println(sb.length());
        
    }

     
}
