package Java.maxchar;
public class Maxchar {
    public static void main(String[] args) {
     int[] arr = {3,6,5,7,9,0};
      int max = arr[0];
        for(int i=1; i<arr.length; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        System.out.println("The maximum value in the array is: " + max);
    }
}