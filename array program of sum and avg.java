import java.util.*;
public class Main{
    public static void main(String args[]){
        int a[]=new int[5];
        int sum=0,avg;
        Scanner obj=new Scanner(System.in);
        for(int i=0;i<5;i++){
            System.out.println("input value");
            a[i]=obj.nextInt();
            sum=sum+a[i];
            System.out.println("sum of array"+sum);
            avg=sum/5;
            System.out.println("avg of array"+avg);
            
        }
    }
}