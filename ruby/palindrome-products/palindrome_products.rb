class Palindromes
  def self.palindrome?(num)
    num.to_s == num.to_s.reverse
  end

  class PalindromeElement
    attr_reader :value, :factors

    def initialize(value, factors)
      @value = value
      @factors = factors
    end
  end

  attr_reader :largest, :smallest

  def initialize(max_factor: 1, min_factor: 1)
    @range = (min_factor..max_factor)
  end

  def generate
    palindromes = Hash.new { |hash, key| hash[key] = [] }

    @range.each do |n1|
      (n1..@range.last).each do |n2|
        palindromes[n1 * n2] << [n1, n2] if Palindromes.palindrome?(n1 * n2)
      end
    end

    max_product = palindromes.keys.max
    min_product = palindromes.keys.min

    @largest = PalindromeElement.new(max_product, palindromes[max_product])
    @smallest = PalindromeElement.new(min_product, palindromes[min_product])
  end
end
