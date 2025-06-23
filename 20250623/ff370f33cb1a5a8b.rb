N = gets.chomp.to_i
A = gets.chomp.split(" ").map(&:to_i)

answer = 1001

A.each do |a|
  answer = a if answer > a
end

puts answer
