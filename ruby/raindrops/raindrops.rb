module Raindrops
  def self.convert(number)
    rain_sound = { 3 => "Pling", 5 => "Plang", 7 => "Plong" }.inject("") do |drops, (key, value)|
      drops += value if number % key == 0
      drops
    end

    if rain_sound.empty?
      number.to_s
    else
      rain_sound
    end
  end
end
