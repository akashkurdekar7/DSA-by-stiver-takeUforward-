import java.util.Arrays;
import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.err.println("Enter N: ");
        int n = sc.nextInt();
        System.err.println("Enter Array elements: ");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            System.err.println(arr[i]);
        }
        // largestNumber(arr, n);
        // second_Largest_Smallest_Number(arr, n);
        // secondsmallestNumber(arr);
        boolean sort = sortedArray(arr, n);
        if (sort == true) {
            System.err.println("true");
        } else {
            System.err.println("false");
        }
        // practise(arr, n);

    }

    public static void largestNumber(int[] arr, int n) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        System.err.println("Max:" + max);

        // or
        // just this two lines
        // ......
        // Arrays.sort(arr);
        // return arr[arr.length - 1];
    }

    public static void second_Largest_Smallest_Number(int[] arr, int n) {
        // Arrays.sort(arr);
        // return arr[arr.length - 2];

        // this wont work for this type array 1 1 2 2 3
        // for this use this
        if (n == 0 || n == 1) {
            System.err.println("-1");
        }
        int large = Integer.MIN_VALUE;
        int second_large = Integer.MIN_VALUE;
        int small = Integer.MAX_VALUE;
        int second_small = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            small = Math.min(small, arr[i]);
            large = Math.max(large, arr[i]);
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] < second_small && arr[i] != small) {
                second_small = arr[i];
            }
            if (arr[i] > second_large && arr[i] != large) {
                second_large = arr[i];
            }
        }
        if (second_large == Integer.MIN_VALUE) {
            System.err.println("no 2nd largest number.");
        } else {
            System.err.println("2nd largest number: " + second_large);
        }
        if (second_small == Integer.MAX_VALUE) {
            System.err.println("no 2nd smallest number.");
        } else {
            System.err.println("2nd smallest number: " + second_small);
        }
    }

    public static int secondsmallestNumber(int[] arr) {
        Arrays.sort(arr);
        return arr[arr.length - arr.length + 1];
    }

    public static Boolean sortedArray(int[] arr, int n) {
        // for (int i = 0; i < n; i++) {
        // for (int j = i + 1; j < n; j++) {
        // if (arr[j] < arr[i]) {
        // return false;
        // }
        // }
        // }
        // return true;

        // or
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                return false;
            }
        }
        return true;
    }

}