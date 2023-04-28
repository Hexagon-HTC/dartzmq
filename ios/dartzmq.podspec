#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html.
# Run `pod lib lint dartzmq2.podspec` to validate before publishing.
#
Pod::Spec.new do |s|
  s.name             = 'dartzmq'
  s.version          = '0.0.1'
  s.summary          = 'A new Flutter FFI plugin project.'
  s.description      = <<-DESC
A new Flutter FFI plugin project.
                       DESC
  s.homepage         = 'http://example.com'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'Your Company' => 'email@example.com' }

  # This will ensure the source files in Classes/ are included in the native
  # builds of apps using this FFI plugin. Podspec does not support relative
  # paths, so Classes contains a forwarder C file that relatively imports
  # `../src/*` so that the C sources can be shared among all target platforms.
  s.source           = { :path => '.' }
  #s.source_files = 'Classes/**/*'
  s.dependency 'Flutter'

  s.source_files = 'Classes/**/*'
  s.public_header_files = 'include/*.h'
  s.vendored_frameworks = 'Libzmq.xcframework'
  s.preserve_paths = 'Libzmq.xcframework'

  s.platform = :ios, '15.0'
  s.ios.deployment_target = '15.0'

  # Flutter.framework does not contain a i386 slice.
  s.pod_target_xcconfig = { 'DEFINES_MODULE' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
  s.swift_version = '5.0'

end
