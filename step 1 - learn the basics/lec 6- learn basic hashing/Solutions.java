import java.util.*;

public class Solutions {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Frequency of elements:");
        countFreq(arr, n);
        System.out.println("Frequency of elements using HashMap:");
        countFreq_map(arr,n);
        Highest_Lowest(arr,n);
    }
    static void countFreq(int[] arr, int n) {
        boolean[] found  =new boolean[n];
        for(int i=0; i<n; i++){
            if(found[i]==true) continue;
            int count = 1;
            for(int j=i+1; j<n; j++) {                
                if(arr[i]==arr[j]){
                    found[j] = true;
                    count++;
                }
            }
            System.out.println(arr[i] + " "+ count);
            
        }

    }

    static void countFreq_map(int[] arr, int n) {
        HashMap<Integer, Integer> hash = new HashMap<>();
        for(int i=0; i<n; i++){
            if(hash.containsKey(arr[i])){
                hash.put(arr[i],hash.get(arr[i])+1); //integer + count =1
            }
            else
            {
                hash.put(arr[i],1);
            }
        }
        for(Map.Entry<Integer, Integer> x : hash.entrySet()){
            System.out.println(x.getKey()+" " + x.getValue());
        }
    }

    static void Highest_Lowest(int arr[], int n) {
        boolean visited[] = new boolean[n];
        int maxFreq = 0, minFreq = n;
        int maxEle = 0, minEle = 0;
        for (int i = 0; i < n; i++) {

            // Skip this element if already processed
            if (visited[i] == true)
                continue;

            // Count frequency
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true;
                    count++;
                }
            }
            if (count > maxFreq) {
                maxEle = arr[i];
                maxFreq = count;
            }
            if (count < minFreq) {
                minEle = arr[i];
                minFreq = count;
            }
        }
        System.out.println("The highest frequency element is: " + maxEle);
        System.out.println("The lowest frequency element is: " + minEle);
    }
}
