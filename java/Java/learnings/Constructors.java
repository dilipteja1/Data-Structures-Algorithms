class Human extends Object
{
    private String name;
    private String age;

    public Human(){
        name = "Dilip";
        age = "26";
    }

    public Human(String name){
        this();
        this.name = name;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getAge() {
        return age;
    }
    public void setAge(String age) {
        this.age = age;
    }
    
}

public class Constructors {
    public static void main(String a[])
    {
        Human h1 = new Human("Teja");
        System.out.println(h1.getName() +" "+  h1.getAge());

    }
}
