Pod::Spec.new do |spec|
spec.name         = "OpenAdSDK"
spec.version      = "2.5.6"
spec.summary      = "OpenAd广告聚合 SDK"
spec.description  = <<-DESC
OpenAd广告SDK是一个专为移动应用开发者设计的广告聚合和收益优化平台。它能够帮助开发者通过多种广告形式提高应用内广告的填充率和eCPM（每千次展示成本），从而增加广告收入
DESC
spec.homepage     = "https://github.com/konnitiha/OpenAdSDK.git"
spec.license      = { :type => "MIT", :file => "LICENSE" }
spec.author             = { "openad" => "1053591151@qq.com" }
spec.source       = { :git => "https://github.com/konnitiha/OpenAdSDK.git", :tag => spec.version }
spec.platform     = :ios, '12.0'
spec.ios.deployment_target = '12.0'
spec.requires_arc = true
spec.frameworks = ["Foundation", "UIKit", "MobileCoreServices", "Security", "SystemConfiguration", "CoreTelephony", "AdSupport", "WebKit", "Accelerate", "CoreMotion"]
#spec.source_files = "OpenAdxSDK/OpenAdx.framework/Headers/*.{h,m}"
spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC'],'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
spec.libraries = ["z", "resolv.9", "sqlite3", "c++", "c++abi", "resolv"]
valid_archs = ['x86_64', 'arm64']
spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 arm64' }
#spec.ios.vendored_frameworks = 'OpenAdxSDK/OpenAdx.framework'
spec.default_subspecs = 'OpenAdSDK'

spec.subspec 'OpenAdSDK' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdSDK.framework'
  end
  
spec.subspec 'CsjAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdCsjAdapter.framework'
end

spec.subspec 'GdtAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdGdtAdapter.framework'
end

spec.subspec 'AdxAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdxAdapter.framework'
end

spec.subspec 'KsAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdKsAdapter.framework'
end

spec.subspec 'TanxAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdTanxAdapter.framework'
end

spec.subspec 'BaiduAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdBaiduAdapter.framework'
end

spec.subspec 'JdAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdJdAdapter.framework'
end
  

#'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
end
