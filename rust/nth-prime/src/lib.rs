pub fn nth(n: u32) -> u32 {
    let mut primes: Vec<u32> = vec![2];
    let mut maybe_prime = 3;

    while (primes.len() - 1) < n as usize {
        if primes.iter().all(|prime| maybe_prime % prime != 0) {
            primes.push(maybe_prime);
        }

        maybe_prime += 1;
    }

    if let Some(prime) = primes.last() {
        *prime
    } else {
        0
    }
}
