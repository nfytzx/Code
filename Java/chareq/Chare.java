/*
import java.util.Scanner;

public class Chare {
    public static void main(String[] args) {
        int[] arr = new int[5];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 5 integers:");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("You entered:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i] + "");
        }
        sc.close();
    }
}
*/


public class Chare {
    public static void main(String[] args) {
        int[] numbers = {12,45,98,54,62};
        int sum = 0;
        int max = numbers[0];
        System.out.println("The numbers in the array are:");
        for(int i=0; i<numbers.length; i++){
            System.out.println(numbers[i] + "");
            sum += numbers[i];
            if(numbers[i] > max){
                max = numbers[i];
            }
        }
        System.out.println("The sum of the numbers is: " + sum);
        System.out.println("The maximum number is: " + max);
    }
}