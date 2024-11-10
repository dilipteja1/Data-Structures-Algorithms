class Calculator
{
    //method overloading 
    public int add(int n1, int n2)
    {
        System.out.println("in add");
        return 0;
    }
    public double add(double n1, double n2)
    {
        return n1+n2;
    }
}
public class Hello
{
    public static void main(String[] args){
        char k = 'a';
        k++;
        System.out.println(k); 
        int a = 257;
        byte b = (byte)a; 
        System.out.println(b);

        int num =2;
        //post increment .First it will assign and then increase
        int result = num++;
        System.err.println(result);

        Calculator calc = new Calculator();
        calc.add();  
    }
}