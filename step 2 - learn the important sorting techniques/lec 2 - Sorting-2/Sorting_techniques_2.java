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
        mergeSort(arr, n);
        output(arr, n);
    }

    // output funtion
    static void output(int[] arr, int n) {
        System.out.println("Sorted Elements: ");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }

    static void mergeSort(int arr[], int n) {
        // also called as divide and conquers algorithm
        int mid = n / 2;
        for (int i = 0; i <= mid; i++) {
            for (int j = 0; j <= i; j++) {
                if (arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
