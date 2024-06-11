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
        // mergeSort(arr, low, high);
        // recursiveBubbleSort(arr, n);
        // recursiveInsertionSort(arr, 0, n);
        QuickSort(arr, low, high);
        output(arr, n);
    }

    // output funtion
    static void output(int[] arr, int n) {
        System.out.println("Sorted Elements: ");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
        System.out.println();
    }

    static void mergeSort(int[] arr, int low, int high) {
        // also called as divide and conquers/merge algorithm
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
            merge(arr, low, mid, high);
        }
    }

    static void merge(int[] arr, int low, int mid, int high) {
        // also called as divide and conquers algorithm
        ArrayList<Integer> temp = new ArrayList<>();
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.add(arr[left]);
                left++;
            } else {
                temp.add(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.add(arr[left]);
            left++;

        }
        while (right <= high) {
            temp.add(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            arr[i] = temp.get(i - low);
        }
    }

    static void recursiveBubbleSort(int[] arr, int n) {
        if (n == 1)
            return;
        for (int j = 0; j <= n - 2; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        recursiveBubbleSort(arr, n - 1);
    }

    static void recursiveInsertionSort(int[] arr, int i, int n) {
        if (i == n)
            return;
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        recursiveInsertionSort(arr, i + 1, n);
    }

    static void QuickSort(int[] arr, int low, int high) {
        if (low < high) {
            int p_Index = partition(arr, low, high);
            QuickSort(arr, low, p_Index - 1);
            QuickSort(arr, p_Index + 1, high);
        }
    }

    static int partition(int[] arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (arr[i] <= pivot && i < high) {
                i++;
            }
            while (arr[j] > pivot && j > low) {
                j--;
            }
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        return j;
    }
}
