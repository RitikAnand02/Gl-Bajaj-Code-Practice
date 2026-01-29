public class SlidingWindow3 {

    public static int minSubArray(int[] arr) {
        int left = 0;
        int count3 = 0, count5 = 0;
        int minLen = Integer.MAX_VALUE;
        for (int right = 0; right < arr.length; right++) {
            if (arr[right] % 3 == 0)
                count3++;
            if (arr[right] % 5 == 0)
                count5++;

            while (count3 > 0 && count5 > 0) {
                minLen = Math.min(minLen, right - left + 1);
                if (arr[left] % 3 == 0)
                    count3--;
                if (arr[left] % 5 == 0)
                    count5--;

                left++;
            }

        }

        return minLen == Integer.MAX_VALUE ? -1 : minLen;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 4, 3, 4, 15, 2 };
        System.out.println(minSubArray(arr));
    }
}
