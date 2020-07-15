class ResistorColorTrio
  COLORS = {
    "black" => 0,
    "brown" => 1,
    "red" => 2,
    "orange" => 3,
    "yellow" => 4,
    "green" => 5,
    "blue" => 6,
    "violet" => 7,
    "grey" => 8,
    "white" => 9,
  }

  UNITS = {
    1e3 => "kilo",
    1e6 => "mega",
    1e9 => "giga",
  }

  attr_reader :value

  def initialize(colors)
    raise ArgumentError if colors.any? { |color| COLORS[color].nil? }

    @value = (COLORS[colors[0]] * 10 + COLORS[colors[1]]) * (10 ** COLORS[colors[2]])
  end

  def label
    UNITS.reverse_each do |key, value|
      if @value >= key
        new_value = @value / key
        new_value = new_value.to_i if @value % key.to_i == 0

        return "Resistor value: #{new_value} #{value}ohms"
      end
    end

    "Resistor value: #{@value} ohms"
  end
end
