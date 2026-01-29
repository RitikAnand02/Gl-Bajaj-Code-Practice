// dynamic sliding window

public class SlidingWindow2_minsubarr {
    public static void main(String[] args) {
        int arr[] = { 1, 4, -3, 2, 7, 6 };
        int left = 0, right = 0;
        int sum = 0, len = 0;
        int minSize = Integer.MAX_VALUE;

        for (right = 0; right < arr.length; right++) {
            sum += arr[right];

            while (sum > 5) {
                len = right - left + 1;
                minSize = Math.min(len, minSize);
                sum -= arr[left];
                left++;
            }
        }

        if (minSize == Integer.MAX_VALUE) {
            minSize = -1;
        }
        System.out.println("Min subarray: " + minSize);
    }
}
