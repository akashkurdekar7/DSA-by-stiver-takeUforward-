import java.util.*;
class hashing {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s;
        s= sc.next();

        HashMap<Character, Integer> h = new HashMap<Character, Integer>();
        for(int i=0; i<s.length(); i++){
            char key = s.charAt(i);
            int freq = 0;
            if(h.containsKey(key)) freq=h.get(key);
            freq++;
            h.put(key, freq);
        }

        int q;
        q= sc.nextInt();
        while(q-->0){
            char c = sc.next().charAt(0);
            if(h.containsKey(c)) System.out.println(h.get(c));
            else System.out.println(0);
        }
    }
}

// NOTE
    // first priority will be always to use {unordered_map}
    // and then
    // {map}
    // If unordered_map gives a time limit exceeded error(TLE),
    // we will then use the map.