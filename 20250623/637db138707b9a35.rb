N = gets.chomp.to_i
A = gets.chomp.split(" ").map(&:to_i)
S = gets.chomp.split(" ")

max_river_length = -1
max_river_index = -1

A.each_with_index do |e, i|
  if e > max_river_length
    max_river_length = e
    max_river_index = i
  end
end

puts S[max_river_index]
