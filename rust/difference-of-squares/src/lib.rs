pub fn square_of_sum(n: u32) -> u32 {
    u32::pow((1..=n).sum(), 2)
}

pub fn sum_of_squares(n: u32) -> u32 {
    (1..=n).fold(0, |sum, x| sum + x.pow(2))
}

pub fn difference(n: u32) -> u32 {
    (sum_of_squares(n) as i32 - square_of_sum(n) as i32).abs() as u32
}
