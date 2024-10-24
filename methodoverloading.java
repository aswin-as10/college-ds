
class overload{
    void area(int x){
       int a=x*x;
       System.out.println("\nthe area of square is"+a);
    }
    void area(int x,int y){
        int b=x*y;
        System.out.println("\nthe area of recatnagle is"+b);
    }
    void area(double x){
        double c= 3.14 * x * x;
        System.out.println("\nthe area of circle is"+c);
        
    }
    void area(double x,double y){
        System.out.println("\nthe area of triangel is"+(0.5*x*y));
    }
}
class methodoverloading{
    public static void main(String []args){
         overload o=new overload();
         o.area(5);
         o.area(5,6);
         o.area(4.0);
         o.area(5.0,5.0);
    }
}
