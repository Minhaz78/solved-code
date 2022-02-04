package staticvariable;
public class student {
    static int count=0;
    student()
    {
        count++;
        
    }
    void totalstudent(){
        System.out.println("totalstudent="+count);
    }
}
