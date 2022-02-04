package inheritance;

public class Test {
    public static void main(String[] args) {
         
       
   /* Teacher t1 =new Teacher();
        t1.name="minhaz";
        t1.age=20;
        t1.qualification="Bsc in cse";
        t1.displayinfo2();
    */
        Person p =new Person();
        Teacher t =new Teacher();
        System.out.println(p instanceof Teacher);
        System.out.println(t instanceof Person);

    }
    
}
