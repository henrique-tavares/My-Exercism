class Dna
  def initialize(raw_dna)
    @nucleotides = {
      "A" => 0,
      "T" => 0,
      "C" => 0,
      "G" => 0,
    }

    raw_dna.each_char do |c|
      raise ArgumentError unless @nucleotides.has_key?(c.upcase)

      @nucleotides[c.upcase] += 1
    end
  end

  def histogram
    @nucleotides
  end

  def count(nucleotide)
    @nucleotides[nucleotide]
  end
end

module Nucleotide
  def self.from_dna(raw_dna)
    Dna.new(raw_dna)
  end
end
