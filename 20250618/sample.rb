require 'rss'

feed = RSS::Parser.parse('https://www.ruby-lang.org/en/feeds/news.rss')
puts "Title: #{feed.channel.title}"
feed.items.each do |item|
  puts "Item: #{item.title}"
end
