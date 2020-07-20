module Raindrops
  def self.convert(number)
    rain_sound = ""

    rain_sound += "Pling" if number % 3 == 0
    rain_sound += "Plang" if number % 5 == 0
    rain_sound += "Plong" if number % 7 == 0

    if rain_sound.empty?
      number.to_s
    else
      rain_sound
    end
  end
end
