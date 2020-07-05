module ResistorColorDuo
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

  def self.value(colors)
    (COLORS.fetch(colors[0], 0) * 10) + COLORS.fetch(colors[1], 0)
  end
end
