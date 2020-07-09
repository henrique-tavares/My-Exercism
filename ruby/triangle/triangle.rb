class Triangle
  def initialize(sides)
    @a, @b, @c = sides
  end

  def valid?()
    if (@a ** 2 + @b ** 2 + @c ** 2) ** 2 > 2 * (@a ** 4 + @b ** 4 + @c ** 4)
      true unless @a < 0 || @b < 0 || @c < 0
    else
      false
    end
  end

  def equilateral?()
    @a == @b && @b == @c if valid?()
  end

  def scalene?()
    @a != @b && @a != @c && @b != @c if valid?()
  end

  def isosceles?()
    !scalene?() if valid?()
  end
end
