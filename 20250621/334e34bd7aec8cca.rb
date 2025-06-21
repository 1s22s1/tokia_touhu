n, m = gets.split(" ").map(&:to_i)

sn = []

n.times do
  s = gets.chomp

  sn << s
end

(0..(n-2)).each do |i|
  diff_count = 0

  (0..m-1).each do |j|
    diff_count += 1 if sn[i][j] != sn[i+1][j]
  end

  unless diff_count == 1
    puts "No"

    return
  end
end

puts "Yes"
