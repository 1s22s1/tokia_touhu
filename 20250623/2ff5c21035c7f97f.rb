N = gets.chomp.to_i
A = gets.chomp.split(" ").map(&:to_i)

answer = -1
max_river = -1

A.each_with_index do |e, i|
  if e > max_river
    max_river = e
    answer = i
  end
end

puts answer
