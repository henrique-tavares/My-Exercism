module CollatzConjecture
  def self.steps(num)
    raise ArgumentError if num <= 0

    steps = 0

    until num == 1
      if num.even?
        num /= 2
      else
        num = 3 * num + 1
      end

      steps += 1
    end

    steps
  end
end
