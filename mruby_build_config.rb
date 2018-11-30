MRuby::Build.new do |conf|
  toolchain :gcc
  conf.gembox 'default'
end

MRuby::CrossBuild.new('mbed') do |conf|
  toolchain :gcc
  conf.bins = []
  conf.build_mrbtest_lib_only
  conf.gembox 'mbed'
end

