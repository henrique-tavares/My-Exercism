class Phrase
  def initialize(phrase)
    @phrase = phrase.downcase.strip
  end

  def word_count
    @phrase.split(%r{[,\s]+}).each_with_object(Hash.new(0)) do |word, words|
      word = word[/(\w|')+/]

      if word.start_with?("'") && word.end_with?("'")
        word[0] = ""
        word[-1] = ""
      end

      words[word] += 1
    end
  end
end
