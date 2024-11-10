class Mobile {

    static String name;
    String Group;
    int serialno;
    // private variables are not accessable from outside, we need a 
    // getter method to get those values in the objects of the class
    private String  make = "OnePlus";
    // encapsulation 
    public String getMake() 
    {
        return make;
    }

    public void setMake(String make){
        this.make = make;
    }
};

class Variables
{
    public static void main(String a[])
    {
        Mobile m1 = new Mobile();
        Mobile m2 = new Mobile();
        // static variable are changed across all the objects created. i.e 
        // name becomes teja across all the instances. 
        // best way is to call it with the class name
        Mobile.name ="dilip";
        Mobile.name ="teja";
        m2.setMake("OneMinus");
        System.out.println(Mobile.name);
        System.out.println(Mobile.name);
        System.out.println(m1.getMake());
        System.out.println(m2.getMake());

    }
}
