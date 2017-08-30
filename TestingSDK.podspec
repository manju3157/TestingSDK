#
# Be sure to run `pod lib lint TestingSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TestingSDK'
  s.version          = '0.2.8'
  s.summary          = 'My First SDK'


  s.description      = <<-DESC
My First SDK to take mobile surveys
                       DESC

  s.homepage         = 'https://github.com/manju3157/TestingSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'manjunath.ramesh@onepointglobal.com' => 'manjunath.ramesh@onepointglobal.com' }
  s.source           = { :git => 'https://github.com/manju3157/TestingSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  #s.source_files = 'TestingSDK/Classes/**/*'

 s.ios.vendored_frameworks = 'OPGFramework.framework', 'OPGRuntime.framework'

  s.resource_bundles = {
'TestingSDK' => ['TestingSDK/Assets/OPGResourceBundle.bundle']
}

   s.resources = "TestingSDK/Assets/OPGResourceBundle.bundle"

#s.pod_target_xcconfig = { 'HEADER_SEARCH_PATHS' => '$(PODS_ROOT)/mypod/module' }
 # s.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(SDKROOT)/usr/include/libxml2 $(PODS_ROOT)/GDataXML-HTML/libxml' }

 s.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(SDKROOT)/usr/include/libxml2', 'OTHER_LDFLAGS' => '-lxml2 -lz -ObjC' }

 s.library = 'xml2', 'c++', 'iconv', 'z'
 #s.xcconfig = { "OTHER_LDFLAGS" => "-ObjC, -lz, -lxml2" }

 # { 'OTHER_LDFLAGS' => '-ObjC', '-lz', '-lxml2'  }
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
