fn main() {
    // Dynamically allocate an integer on the heap using Box.
    let boxed_int = Box::new(10);
    println!("Boxed integer: {}", boxed_int);

    // Create a dynamic vector and add some elements.
    let mut numbers = vec![1, 2, 3];
    println!("Vector before modification: {:?}", numbers);

    // Borrowing: we create an immutable reference to the vector.
    let first = &numbers[0];
    println!("First element via borrowing: {}", first);

    // Ownership rules ensure that when 'numbers' goes out of scope,
    // its memory is automatically reclaimed, with no chance for memory leaks or dangling pointers.
}

