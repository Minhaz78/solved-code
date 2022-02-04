package Staticword;
public class Staticword {
 String name;  
 int id;
 static String universityname= "puc";
 
Staticword(String n,int i)
{
name=n;
id=i;
}
void show()
{
    System.out.println("name"+name);
    System.out.println("id"+id);
    System.out.println("university name"+universityname);
}
}
