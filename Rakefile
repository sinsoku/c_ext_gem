require "bundler/gem_tasks"
require "rspec/core/rake_task"

RSpec::Core::RakeTask.new(:spec)

task :default => :spec

require "rake/extensiontask"
Rake::ExtensionTask.new('c_ext_gem') do |ext|
  ext.lib_dir = 'lib/c_ext_gem'
end
