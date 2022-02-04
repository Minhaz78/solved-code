package gray;
import java.util.*;
public class Gray {

    public static void main(String[] args) {
       int j,i;
      
    
for(i=0;i<=255;i++)
{
     
Scanner ob = new Scanner(System.in);
int n=ob.nextInt();
    System.out.println(n);
   // int n;
  
    
    //Scanner n;
if(0<=n && n<=99)
{
        System.out.println("black");
}
else if(100<=n&&n<=199)
{
    System.out.println("gray");
}
else
{
    System.out.println("white");
}
}
    }
    
    }
