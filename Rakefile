task :default => :run

desc "Run"
task :run => :build do
  ruby("hello.rb")
end

desc "Build"
task :build => "hello.so"

file "Makefile" => "extconf.rb" do
  ruby("extconf.rb")
  sh("make", "clean")
end

file "hello.so" => ["Makefile", "hello.cpp"] do
  sh("make")
end