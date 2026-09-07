package Java.wh;

public class wh {
    public static void main(String[] args) {
        int i = 1;      
        int sum = 0;    
        while (i <= 100) {
            sum += i;  
            i++;      
        }
        System.out.println("1 到 100 的整数和为: " + sum); 
    }
}
