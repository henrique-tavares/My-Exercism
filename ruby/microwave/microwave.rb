=begin
Write your code for the 'Microwave' exercise in this file. Make the tests in
`microwave_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/microwave` directory.
=end

class Microwave
  def initialize(raw_time)
    @seconds = raw_time % 100
    @minutes = raw_time / 100

    if @seconds >= 60
      @minutes += 1
      @seconds -= 60
    end
  end

  def timer
    format("%02d:%02d", @minutes, @seconds)
  end
end
