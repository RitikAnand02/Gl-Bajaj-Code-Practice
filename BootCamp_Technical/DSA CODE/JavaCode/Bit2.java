public class Bit2 {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 6 };
        int x = 0, d = 0;

        for (int i = 1; i <= arr.length + 1; i++) {
            x = x ^ i;
        }

        for (int i = 0; i < arr.length; i++) {
            x = x ^ arr[i];
        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                d = arr[i];
            }
        }

        System.out.println("Missing " + x);
        System.out.println("Duplicate " + d);
    }
}
