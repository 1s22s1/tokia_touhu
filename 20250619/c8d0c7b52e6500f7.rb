N = gets.chomp.to_i
C = gets.chomp
S = gets.chomp

puts S.count(C.downcase) + S.count(C.upcase)
