pub fn factors(mut n: u64) -> Vec<u64> {
    let mut factors = vec![];
    let mut maybe_factor = 2;

    while n > 1 {
        while n % maybe_factor == 0 {
            n /= maybe_factor;
            factors.push(maybe_factor);
        }

        maybe_factor += 1;
    }

    factors
}
