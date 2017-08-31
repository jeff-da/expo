Pod::Spec.new do |s|
  s.name         = ‘ExpoPayments’
  s.version      = '1.0.0'
  s.license      = 'BSD-Exponent'
  s.homepage     = 'https://github.com/exponent/exponent/tree/master/cpp'
  s.authors      = { ‘Jeffrey Da’ => ‘jzda@cs.washington.edu’ }
  s.summary      = ‘iOS Payments Code for ExpoKit’

  s.platform     = :ios, "8.0"
  s.source       = { :path => '.' }

  s.source_files = ‘*.{h,m}’
end
