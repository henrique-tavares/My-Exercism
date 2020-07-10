class Anagram
  def initialize(string_base)
    @string_base = string_base.downcase
  end

  def match(possible_anagrams)
    possible_anagrams.select do |possible_anagram|
      anagram?(possible_anagram.downcase)
    end
  end

  def anagram?(possible_anagram)
    return false if @string_base.eql? possible_anagram || @string_base.size != possible_anagram.size

    possible_anagram.each_char do |c|
      return false if possible_anagram.count(c) != @string_base.count(c)
    end

    true
  end
end
