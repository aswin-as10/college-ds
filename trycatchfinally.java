import java.util.*;
public class exception {
       public static void main(String []args)
          {
            try{
                Scanner n=new Scanner(System.in);
                System.out.println("enter two numbers");
                System.out.println();
                int a=n.nextInt();
                int b=n.nextInt();
                int c=a/b;
                System.err.println(c);
            }catch(ArithmeticException e){
                System.out.println(e.getMessage());
            }finally{
                System.out.println("execution  is done");
            }

     }
  }
