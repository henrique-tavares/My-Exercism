class Matrix
  attr_reader :rows, :columns

  def initialize(numbers)
    raw_rows = numbers.split("\n")

    @rows = raw_rows.collect do |raw_row|
      raw_row.split.collect { |num| num.to_i }
    end

    @columns = @rows.transpose
  end
end
