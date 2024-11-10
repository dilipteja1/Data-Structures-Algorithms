public class Student 
{
    String name;
    String rollno;
    String fullname;
}

public class arrays {

    public void array_declaration()
    {
        // single dimensional array.
        int arr[] = new int[10];
    
        // multi dimensional array
        // indicates 3 different array with 4 different values in each array  
        int arr2[][] = new int[3][4];
    
        //assigning to 2d array
        for (int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                arr2[i][j] = (int)(Math.random() * 100);
            }
        }
    
        // accesing the array
        for (int n[] : arr2){
            for (int m : n){
                System.out.print(m + " ");
            }
            System.out.println();
        }
    }

    public static void main(String args[])
    {

    }


        
        
}

