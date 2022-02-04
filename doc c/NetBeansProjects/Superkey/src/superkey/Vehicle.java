package superkey;
public class Vehicle {
    String colour;
    double weight;
    Vehicle(String c,double w)
    {
        colour=c;
        weight=w;
    }
    void attribute()
    {
        System.out.println("colour:"+colour);
        System.out.println("weight:"+weight);
    }
    
}
