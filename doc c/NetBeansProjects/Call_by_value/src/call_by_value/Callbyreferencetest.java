package call_by_value;
public class Callbyreferencetest {
    public static void main(String[] args) {
        Callbyreference r1=new Callbyreference();
        r1.name="khan";
        System.out.println("before calling:"+r1.name);
        
        r1.change(r1);
        System.out.println("after calling:"+r1.name);
    }
    
}
