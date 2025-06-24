N = gets.chomp.to_i
A = gets.chomp.split(" ").map(&:to_i)

ans = -1

A.each do |a|
  ans = a if a > ans
end

puts ans
