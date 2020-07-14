pub fn is_armstrong_number(num: u32) -> bool {
    let mut numbers = vec![];
    let mut num_copy = num;

    while num_copy > 0 {
        numbers.push(num_copy % 10);
        num_copy /= 10;
    }

    numbers
        .iter()
        .fold(0, |sum, &n| sum + n.pow(numbers.len() as u32))
        .eq(&num)
}
