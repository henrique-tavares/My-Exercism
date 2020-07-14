module ArmstrongNumbers
  def self.include?(num)
    num_str = num.to_s

    num_str
      .split(//)
      .inject(0) { |sum, x| sum + (x.to_i ** num_str.length) }
      .eql?(num)
  end
end
