module ETL
  def self.transform(old)
    transformed = Hash.new

    old.each do |key, values|
      values.each do |value|
        transformed[value.downcase] = key
      end
    end

    transformed
      .sort_by { |key, value| key }
      .to_h
  end
end
