class Triplet
  def self.where(sum: nil, min_factor: 0, max_factor: 0)
    triplets = Array.new

    (min_factor..max_factor).each do |a|
      ((a + 1)..max_factor).each do |b|
        ((b + 1)..max_factor).each do |c|
          triplet = self.new(a, b, c)

          if sum.nil?
            triplets << triplet if triplet.pythagorean?
          else
            triplets << triplet if triplet.pythagorean? && triplet.sum == sum
          end
        end
      end
    end

    triplets
  end

  def initialize(a, b, c)
    @a = a
    @b = b
    @c = c
  end

  def pythagorean?
    @a ** 2 + @b ** 2 == @c ** 2 && (@a < @b && @b < @c)
  end

  def sum
    @a + @b + @c
  end

  def product
    @a * @b * @c
  end
end
