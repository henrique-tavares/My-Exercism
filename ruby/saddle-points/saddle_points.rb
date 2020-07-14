class Matrix
  attr_reader :rows, :columns, :saddle_points

  def initialize(raw_matrix)
    @rows = raw_matrix.split("\n").collect do |raw_row|
      raw_row.split(" ").collect { |elem| elem.to_i }
    end

    @columns = @rows.transpose

    @saddle_points = Array.new

    @rows.each_with_index do |row, row_index|
      row.each_with_index do |elem, column_index|
        if elem == row.max && elem == @columns[column_index].min
          @saddle_points << [row_index, column_index]
        end
      end
    end
  end
end
