N = gets.chomp.to_i

S = []

N.times do |_|
  s = gets.chomp
  S << s
end


if S.length != S.uniq.length
  puts "No"

  return
end

(N - 1).times do |i|
  if S[i][-1] != S[i + 1][0]
    puts "No"

    return
  end
end

puts "Yes"
