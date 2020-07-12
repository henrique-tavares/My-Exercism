module Transpose
  def self.transpose(input)
    return "" if input.empty?

    rows = input
      .split("\n")
      .collect { |row| row.split(//) }

    max = rows.max_by { |row| row.length }

    rows.collect! do |row|
      row_index = rows.find_index(row)
      max_left = rows[row_index..].max_by { |x| x.length }
      difference = max_left.length - row.length

      row += Array.new(difference, " ") unless difference <= 0
      row + Array.new(max.length - row.length, nil)
    end

    columns = rows.transpose

    columns
      .collect { |column| column.compact.join }
      .join("\n")
  end
end
