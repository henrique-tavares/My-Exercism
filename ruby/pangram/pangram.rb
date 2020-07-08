module Pangram
  def self.pangram?(sentence)
    alphabet = []

    sentence.downcase.each_char do |c|
      alphabet.push(c) if !alphabet.include?(c) && c =~ /[a-z]/
    end

    alphabet.length == 26
  end
end
