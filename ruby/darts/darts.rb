=begin
Write your code for the 'Darts' exercise in this file. Make the tests in
`darts_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/darts` directory.
=end

class Darts
  attr_reader :score

  def initialize(x, y)
    case Math.sqrt(x ** 2 + y ** 2).ceil
    when (0..1)
      @score = 10
    when (2..5)
      @score = 5
    when (6..10)
      @score = 1
    else
      @score = 0
    end
  end
end
