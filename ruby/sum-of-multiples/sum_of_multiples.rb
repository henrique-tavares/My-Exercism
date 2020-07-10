class SumOfMultiples
  def initialize(*factors)
    @factors = factors
  end

  def to(multiple)
    sum = 0

    multiple.times do |n|
      sum += n if @factors.select { |factor| n % factor == 0 unless factor == 0 }.length > 0
    end

    sum
  end
end
