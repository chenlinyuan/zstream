
Pod::Spec.new do |s|

  s.name         = "alas_zstream"
  s.version      = "1.0"
  s.summary      = "alas_zstream."
  s.description  = "用来以后方便使用zstream"

  s.homepage     = "https://github.com/chenlinyuan"
  s.license      = "MIT"
  s.author             = { "chenlinyuan" => "ala.s743k@gmail.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/chenlinyuan/zstream.git", :tag => "#{s.version}" }


  s.frameworks = ''
  s.requires_arc = true

  s.vendored_libraries = 'libzstreamlib.a'
  s.public_header_files = "*.h"
  s.source_files = "*.h"
end
