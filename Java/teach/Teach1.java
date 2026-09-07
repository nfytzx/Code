package Java.teach;
import java.util.Scanner;
public class Teach1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("请输入一个整数: ");
        int number = scanner.nextInt();
        if (number > 0) {
            System.out.print("该数为正数");
            if (number % 2 == 0) {
                System.out.println("且为偶数");
            } else {
                System.out.println("且为奇数");
            }
        } else if (number < 0) {
            System.out.print("该数为负数");
            if (number % 2 == 0) {
                System.out.println("且为偶数");
            } else {
                System.out.println("且为奇数");
            }
        } else {
            System.out.println("该数为零");
        } 
        scanner.close();
    }
}
//分支结构课堂任务