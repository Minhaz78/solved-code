package final3;
import java.util.ArrayList;
import java.util.List;
public class Final3 {

    public static void main(String[] args) {
         ArrayList<String>a1=new ArrayList<String>();
        a1.add("james");
        a1.add("don");
        a1.add("jame");
        a1.add("khan");
        a1.add(3,"salman");
        a1.add(5,"jami");
        System.out.println("arraylist before addall:"+a1);
       for(String var:a1)
       {
           System.out.println(var);
       
       }
       a1.remove("don");
       a1.remove("jame");
       a1.remove("salman");
       a1.remove("jami");
boolean b=a1.remove("aim");
        System.out.println("remove aim"+b);
        System.out.println("arraylist after remove");
        for(String var2:a1){
            System.out.println(var2);
        }
    }
}
