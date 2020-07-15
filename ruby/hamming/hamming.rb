module Hamming
  def self.compute(str1, str2)
    raise ArgumentError if str1.length != str2.length

    difference = 0

    str1.length.times do |i|
      difference += 1 if str1[i] != str2[i]
    end

    difference
  end
end
