class Proverb
  def initialize(*words, qualifier: nil)
    @proverb = []

    words.each_cons(2) do |current_word, next_word|
      @proverb << "For want of a #{current_word} the #{next_word} was lost."
    end

    if qualifier
      @proverb << "And all for the want of a #{qualifier} #{words.first}."
    else
      @proverb << "And all for the want of a #{words.first}."
    end
  end

  def to_s
    @proverb.join("\n")
  end
end
