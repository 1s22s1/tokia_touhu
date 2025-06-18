S = gets.chomp

S.scan(/[a-z]\d*/) do |str|
  print str[0] * str[1..].to_i
end

puts
