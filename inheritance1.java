class employee{
    String name;
    int age;
    int no;
    String address;
    float salary;
    employee(String name,int age,int no,String address,float salary)
      {
        this.name=name;
        this.age=age;
        this.no=no;
        this.address=address;
        this.salary=salary;
      }
      void printsalary(){
        System.out.println("salary is"+salary+"\n");
      }
}
class officer extends employee{
    String spec;
    officer(String name,int age,int no,String address,float salary,String spec){
        super(name,age,no,address,salary);
        this.spec=spec;
    }
    void printinfo(){
        System.out.println("Name: "+name+"\n"+"Age: "+age+"\n"+"Number: "+no+"\n"+"Address: "+address+"\n"+"Salary: "+salary+"\n"+"specialization: "+spec+"\n");
    }
}
class manager extends employee{
     String dept;
     manager(String name,int age,int no,String address,float salary,String dept){
        super(name,age,no,address,salary);
        this.dept=dept;
     }
     void printinfo(){
        System.out.println("Name: "+name+"\n"+"Age: "+age+"\n"+"Number: "+no+"\n"+"Address: "+address+"\n"+"Salary: "+salary+"\n"+"Department: "+dept+"\n");
     }
}
 class inheritance1{
    public static void main(String[]args){
        officer o=new officer("david",19,1234,"abc house",6000.0f,"design");
        manager m=new manager("praneeth",19,4567,"xyz house",5000.0f,"hr");
        System.out.println("OFFICER DETAILS");
        o.printinfo();
        o.printsalary();
        System.out.println("MANAGER DETAILS");
        m.printinfo();
        m.printsalary();
    }
}
