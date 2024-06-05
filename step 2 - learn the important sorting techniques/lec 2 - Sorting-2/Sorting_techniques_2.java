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
        int low = 0;
        int high = n - 1;
        mergeSort(arr, low, high);
        output(arr, n);
    }

    // output funtion
    static void output(int[] arr, int n) {
        System.out.println("Sorted Elements: ");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }

    static void mergeSort(int arr[], int low, int high) {
        // also called as divide and conquers algorithm
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    static void merge(int arr[], int low, int mid, int high) {
        // also called as divide and conquers algorithm
        int[] temp = new int[high + 1];
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp[arr[left]] = sc.nextInt();
                left++;
            } else {
                temp[arr[right]] = sc.nextInt();
                right++;
            }
        }
        while (left <= mid) {
            temp[arr[left]] = sc.nextInt();
            left++;

        }
        while (right <= high) {
            temp[arr[right]] = sc.nextInt();
            right++;
        }
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }
}
