module PhoneNumber
  def self.clean(raw_number)
    numbers = raw_number.split(%r{\D+}).join.split(//)

    return nil unless (10..11) === numbers.length

    if numbers.length == 11
      return nil if numbers.first != "1"

      numbers.delete_at(0)
    end

    return nil if numbers[0] < "2" || numbers[3] < "2"

    numbers.join
  end
end
