class Series
  def initialize(string_serie)
    @string_serie = string_serie
  end

  def slices(slice_size)
    raise ArgumentError if slice_size > @string_serie.size || slice_size <= 0

    slices = []

    (@string_serie.size - slice_size + 1).times do |i|
      slices << @string_serie[i, slice_size]
    end

    slices
  end
end
