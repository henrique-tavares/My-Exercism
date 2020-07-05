module Complement
  DNA_TO_RNA = {
    "G" => "C",
    "C" => "G",
    "T" => "A",
    "A" => "U",
  }

  def self.of_dna(dna)
    rna = String.new

    dna.each_char do |nucleotide|
      rna << DNA_TO_RNA[nucleotide]
    end

    rna
  end
end
