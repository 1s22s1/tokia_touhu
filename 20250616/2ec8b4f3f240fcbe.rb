S = gets.chomp

hash = {}

('a'..'z').each_with_index do |e, i|
  hash[format('%02d', i + 1)] = e
end

answer = ''

S.chars.each_slice(2).map(&:join).each do |c|
  answer += hash[c]
end

puts answer
