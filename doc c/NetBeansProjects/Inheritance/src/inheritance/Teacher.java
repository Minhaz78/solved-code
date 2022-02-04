package inheritance;
public class Teacher extends Person{
String qualification;
void displayinfo2()
{
    displayinfo1();
    System.out.println("quallification="+qualification);
}
}
