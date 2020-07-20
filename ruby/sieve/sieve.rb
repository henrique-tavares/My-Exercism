class Sieve
  attr_reader :primes

  def initialize(limit)
    numbers = (2..limit).to_a

    numbers.each_with_index do |n, i|
      next if n.nil?
      break if n * n >= limit

      ((i + n)...numbers.size).step(n) do |index|
        numbers[index] = nil
      end
    end

    @primes = numbers.compact
  end
end
