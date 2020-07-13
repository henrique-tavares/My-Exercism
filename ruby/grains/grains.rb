module Grains
  def self.square(squares)
    raise ArgumentError unless (1..64) === squares

    2 ** (squares - 1)
  end

  def self.total
    2 ** 64 - 1
  end
end
