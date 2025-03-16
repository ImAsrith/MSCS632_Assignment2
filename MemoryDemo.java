public class MemoryDemo {
    public static void main(String[] args) {
        // Allocate an array dynamically.
        int[] numbers = new int[3];
        numbers[0] = 1;
        numbers[1] = 2;
        numbers[2] = 3;

        System.out.println("Java Array elements:");
        for (int num : numbers) {
            System.out.println(num);
        }

        // In Java, memory is managed automatically via garbage collection.
        // Once there are no more references to the 'numbers' array, it becomes eligible for garbage collection.
        // Optionally, we can nullify the reference and suggest a GC run (though it's non-deterministic).
        numbers = null;
        System.gc();
    }
}
