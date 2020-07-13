class Phrase
  def initialize(phrase)
    @phrase = phrase.downcase.strip
  end

  def word_count
    words = Hash.new(0)

    @phrase.split(%r{[,\s]+}).each do |word|
      word = word[/(\w|')+/]

      if word.start_with?("'") && word.end_with?("'")
        word[0] = ""
        word[-1] = ""
      end

      words[word] += 1
    end

    words
  end
end
