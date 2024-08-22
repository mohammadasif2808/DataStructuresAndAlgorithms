import java.util.*;

public class PairSumProblem {
    public static void main(String[] args) throws Exception {
//        if (System.getProperty("ONLINE_JUDGE") == null) {
//            System.setIn(new FileInputStream("../files/input.txt"));
//            System.setOut(new PrintStream(new FileOutputStream("../files/output.txt")));
//        }

        // Array
        int arr[] = { 2, 1, 8, 6, -2, 5, 3, 0 };

        int k = 8;
        int size = arr.length;

        // Solution 1 Using nested for loop - O(N^2)

        // for (int i = 0; i < size; i++) {
        //     for (int j = 0; j < size; j++) {
        //         if (arr[i] + arr[j] == k) {
        //             System.out.println(arr[i] + " " + arr[j]);
        //         }
        //     }
        // }

        System.out.println();

        // Solution 2 Using HashSet - O(N)

        Set<Integer> set = new HashSet<Integer>();
        for (int i = 0; i < size; i++) {
            set.add(arr[i]);
        }

        // System.out.println("Set: " + set);

        for (int i = 0; i < size; i++) {
            int find = k - arr[i];
            if (set.contains(find)) {
                System.out.println(arr[i] + " " + find);
            }
        }

        // Print set elements
        // Iterator<Integer> iterator = set.iterator();
        // while (iterator.hasNext()) {
        // Integer type = iterator.next();
        // System.out.println(type);
        // }

        // Print arrary using for each loop
        // System.out.println();
        // print array
        // for(int x : arr) {
        // System.out.print(x+" ");
        // }

        // Simple input and output
        // Scanner sc = new Scanner(System.in);
        // int x;
        // x=sc.nextInt();
        // System.out.print("Hello world from Java !!! "+x);
    }
}