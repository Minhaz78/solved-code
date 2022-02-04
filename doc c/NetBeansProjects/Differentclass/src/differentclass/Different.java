package differentclass;
public class Different {
int age,phone;
String name,dept;
Different()
{
    System.out.println("hero of the year");
}
Different(String n,String d,int a)
{
    name=n;
    dept=d;
    age=a;
    
}
Different(String n,String d)
{
    name=n;
    dept=d;
    
    
}

void display()
{
    System.out.println(""+name);
        System.out.println(""+dept);
        System.out.println(+age);
}
}
