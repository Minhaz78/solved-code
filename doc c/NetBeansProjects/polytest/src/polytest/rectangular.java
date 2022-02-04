package polytest;
public abstract class rectangular extends shape{
double length, width;
rectangular(double length,double width)
{
    this.length=length;
    this.width=width;
}
@Override
double area()
{
    return length*width;
}
@Override
void sendmessage()
{
    System.out.println("area of rectengular");
}
        
}
