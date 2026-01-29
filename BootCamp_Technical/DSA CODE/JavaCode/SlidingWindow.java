//  Static Sliding window

public class SlidingWindow {
    public static void main(String[] args) {
        int arr[] = { 1, -2, 3, 4, -6, -4, 5, 6 };
        int n = 4;
        int sum = 0;
        int max = Integer.MIN_VALUE;

        // // window one
        // for (int i = 0; i < n; i++) {
        // sum = sum + arr[i];
        // }
        // if (sum > max) {
        // max = sum;
        // }
        // System.out.println(sum);
        // // Next element insert = n - len -1
        // for (int i = n; i < arr.length; i++) {
        // sum += arr[i] - arr[i - n];
        // System.out.println(sum);
        // if (sum > max)
        // max = sum;
        // }
        // System.out.println("Max Sum : " + max);

        // Method - 2nd
        for (int i = 0; i < arr.length; i++) {
            if (i < n) {
                sum += arr[i];
            } else {
                sum += arr[i] - arr[i - n];
            }
            if (i >= n - 1)
                System.out.println(sum);
            if (sum > max)
                max = sum;
        }
        System.out.println("Max Sum : " + max);
    }
}
