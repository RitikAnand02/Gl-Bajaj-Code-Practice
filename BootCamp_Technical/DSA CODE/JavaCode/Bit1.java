// Mising number
public class Bit1 {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 6 };
        int x = 0, y = 0;

        for (int i = 1; i <= arr.length + 1; i++) {
            x = x ^ i;
        }

        for (int i = 0; i < arr.length; i++) {
            y = y ^ arr[i];
        }

        System.out.println(x ^ y);
    }
}