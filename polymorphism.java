abstract class shape{
     abstract void no_of_sides();
}
class Rectangle extends shape{
        void no_of_sides(){
            System.out.println("no of sides=4\n");
        }
}
class Triangle extends shape{
     void no_of_sides(){
        System.out.println("no of sides =3\n");
     }
}
class Hexagon extends shape{
    void no_of_sides(){
        System.out.println("no of sides=6\n");
    }
}
class polymorphism{
        public static void main(String[]args){
              shape r=new Rectangle();//create a rectangle object
              shape t=new Triangle();
              shape h=new Hexagon();
              r.no_of_sides();
              t.no_of_sides();
              h.no_of_sides();


        }
}
