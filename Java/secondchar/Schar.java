package Java.secondchar;

/* 
public class Schar {
    public static void main(String[] args) {
        int [] [] arr = new int [2][3];
        int value = 1;
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr[i].length; j++){
                arr[i][j] = value;
                value++;
            }
        }
        int sum = 0;
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr[i].length; j++){
                sum += arr[i][j];
            }
        }
        System.out.println("The sum of the numbers is: " + sum);
    }
}
*/

public class Schar {
    public static void main(String[] args) {
        int [][] arr = {{1,2,3},{4,5,6},{7,8,9}};
        int char21 = arr[1][0];
        System.out.println("The value at row 2, column 1 is: " + char21);
        System.out.println("The values in the array are:");
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr[i].length; j++){
                System.out.print(arr[i][j] + " ");
            }
        }
    }
}