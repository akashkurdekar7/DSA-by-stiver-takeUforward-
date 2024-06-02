import java.util.*;

public class Sorting_techniques_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        output(arr, n);
    }

    // output funtion
    static void output(int[] arr, int n) {
        System.out.println("Sorted Elements: ");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }
}
