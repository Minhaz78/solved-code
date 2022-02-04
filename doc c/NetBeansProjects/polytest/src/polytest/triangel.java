package polytest;
public abstract class triangel extends shape {
double height,weight;
triangel(double height,double weight)
{
 this.height=height;
 this.weight=weight;
 
}
@Override
double area()
{
    return 0.5*height*weight;
}
void sendmessage()
{
    System.out.println("area of triangel");
}
}
