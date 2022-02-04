package call_by_value;
public class Callbyvaluetest {
    public static void main(String[] args) {
        Call_by_value ob=new Call_by_value();
        int x=10;
        System.out.println("x before call:"+x);
        ob.change(x);
        System.out.println("x after call:"+x);
    }
    
}
