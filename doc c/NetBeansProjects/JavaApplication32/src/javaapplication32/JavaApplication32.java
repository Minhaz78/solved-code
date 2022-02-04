package javaapplication32;
class a extends Thread{
    @Override
    public  void run()
    {
        
        System.out.println("hello");
    }

  
 
     public static void main(String[] args) {
         a obj=new a();
         obj.start();
     }
     
}     
     
     
    
