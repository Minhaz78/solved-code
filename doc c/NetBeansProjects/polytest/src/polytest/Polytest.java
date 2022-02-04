package polytest;
public class Polytest {
    public static void main(String[] args) {
        shape[] s=new shape[3];
        s[0]=new rectangular(5,10) {};
        s[0].sendmessage();
        s[1]=new triangel(5,5) {};
        s[1].sendmessage();
        s[2]=new shape() {

            @Override
            void sendmessage() {
                throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        };
        s[2].sendmessage();
        for(int i=0;i<3;i++)
        {
            System.out.println(s[i].area());
        }
    }
    
}
