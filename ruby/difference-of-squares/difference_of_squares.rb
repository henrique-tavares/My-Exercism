class Squares
  def initialize(num)
    @num = num
  end

  def square_of_sum
    sum = 0

    @num.times do |i|
      sum += i + 1
    end

    sum ** 2
  end

  def sum_of_squares
    sum = 0

    @num.times do |i|
      sum += (i + 1) ** 2
    end

    sum
  end

  def difference
    (square_of_sum() - sum_of_squares()).abs
  end
end
