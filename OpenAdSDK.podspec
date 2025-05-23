Pod::Spec.new do |spec|
spec.name         = "OpenAdSDK"
spec.version      = "5.26.2"
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
spec.frameworks = ["Foundation", "UIKit", "MobileCoreServices", "Security", "SystemConfiguration", "CoreTelephony", "AdSupport", "WebKit", "Accelerate", "CoreMotion","StoreKit", "AVFoundation", "MediaPlayer", "CoreMedia","CoreLocation", "AVKit","CoreGraphics","CoreImage","AudioToolbox"]

spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC'],'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
spec.libraries = ["z", "resolv.9", "sqlite3", "c++", "c++abi", "resolv"]
valid_archs = ['x86_64', 'arm64']
spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 arm64' }
spec.default_subspecs = 'OpenAdSDK'

spec.subspec 'OpenAdSDK' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdSDK.framework'
     ss.resources = ['OpenAdSDK/OpenAdSDK.bundle']
     
  end
  
spec.subspec 'CsjAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdCsjAdapter.framework'
     #ss.dependency 'Ads-CN-Beta','>= 6.1.1.0', '<= 6.4.0.9', :subspecs => ['BUAdSDK', 'CSJMediation']
     ss.dependency 'Ads-CN-Beta/BUAdSDK','>= 6.5.0.5'
     ss.dependency 'Ads-CN-Beta/CSJMediation','>= 6.5.0.5'
end

spec.subspec 'GdtAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdGdtAdapter.framework'
     ss.dependency 'GDTMobSDK','>= 4.15.21'
end



spec.subspec 'KsAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdKsAdapter.framework'
     ss.dependency 'KSAdSDK','>= 3.3.69'
end

spec.subspec 'TanxAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdTanxAdapter.framework'
     ss.dependency 'TanxSDK','>= 3.6.7'
end

spec.subspec 'BaiduAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdBaiduAdapter.framework'
     ss.dependency 'BaiduMobAdSDK','>= 5.371'
end

spec.subspec 'JdAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdJdAdapter.framework'
     ss.dependency 'JADYun','>= 2.6.4'
end

spec.subspec 'IFLYAdSDK' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.source_files = 'OpenAdSDK/IFLYAdSDK/*'
     ss.public_header_files = 'OpenAdSDK/IFLYAdSDK/*.h'
     ss.resources = ['OpenAdSDK/IFLYAdSDK/IFLYPlayer.bundle']
end

spec.subspec 'IFLYAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.dependency 'OpenAdSDK/IFLYAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdiFLYAdapter.framework'
end

spec.subspec 'QuMengAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdQuMengAdapter.framework'
     ss.dependency 'QuMengAdSDK','>= 1.3.4'
end
  
  
  spec.subspec 'BBTAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdBbtAdapter.framework'
     ss.dependency 'BBTAds','1.2.2'
end

  spec.subspec 'ZJAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdZJAdapter.framework'
     ss.dependency 'ZJSDK/ZJSDKModuleDSP','2.5.9.12'
  end
  
    spec.subspec 'TakuAdapter' do |ss|
     ss.dependency 'OpenAdSDK/OpenAdSDK'
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'OpenAdSDK/OpenAdTakuAdapter.framework'
     ss.dependency 'AnyThinkiOS','>= 6.4.75'
  end

#'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
end
