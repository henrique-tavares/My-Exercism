module Acronym
  def self.abbreviate(phrase)
    phrase
      .split(%r{[,\s-]+})
      .collect { |word| word[0].upcase }
      .join
  end
end
