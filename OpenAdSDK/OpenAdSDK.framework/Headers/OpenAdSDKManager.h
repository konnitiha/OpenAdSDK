//
//  OpenAd.h
//  OpenAdSDK
//
//  Created by fyl on 2022/10/18.
//

#import <Foundation/Foundation.h>
#import "OpenAdConst.h"



NS_ASSUME_NONNULL_BEGIN


//里面设置相关需要初始化前设置
@interface OpenAdConfigModel : NSObject

/// required 应用 id
@property(nonatomic,copy)NSString *appID;

/// optional 如聚合接入 tanx,则需要在这里设置 tanx 平台的 appkey
@property(nonatomic,copy)NSString *tanxAppKey;

/// optional 限制个性化广告推荐 0-不限制，1-限制，默认为0。
@property(nonatomic,strong)NSNumber *limitPersonalAds;

/// optional 限制程序化广告  0-不限制，1-限制，默认为0。 只适用于ks
@property(nonatomic,strong)NSNumber *limitProgrammaticAds;

/// optional 禁止CAID  0-不禁止，1-禁止，默认为0。 只适用于百度 (已废弃)
@property(nonatomic,strong)NSNumber *forbiddenCAID;

/// optional 禁止IDFA：0-不禁止，1-禁止，默认为0。只适用于GDT。
@property(nonatomic,strong)NSNumber *forbiddenIDFA;

/// optional 禁止地理位置：0-不禁止，1-禁止，默认为0。
@property(nonatomic,strong)NSNumber *forbiddenLocation;

/// optional 禁止采集设备信息:0-不禁止，1-禁止，默认为0。
@property(nonatomic,strong)NSNumber *forbiddenDeviceInfo;

/// optional 禁止 IDFA情况下,用户传入自定义字符串,透传三方广告平台
@property(nonatomic,copy)NSString *customIDFA;

@end



//里面设置相关可随时更改
@interface OpenAdSDKManager : NSObject

///configModel
@property(strong,nonatomic)OpenAdConfigModel *configModel;

/// 获取单例
+ (instancetype)shareInstance;

/// SDK版本
+ (NSString *)sdkVersion;

/// SDK 初始化方法
/// - Parameters:
///   - model: 配置, model.appID 为必传
///   - completionBlock:  初始化回调
+ (void)startWithConfigModel:(OpenAdConfigModel *)model completionBlock:(void (^)(NSError * _Nullable error))completionBlock;

/// 设置调试模式,仅开发测试使用
/// - Parameter isDebug: 是否调试模式
+ (void)setDebugModel:(BOOL)isDebug;

/// 是否调试模式
+ (BOOL)isDebug;

/// 控制台log级别
/// 0 不打印  默认
/// 1 打印
@property (nonatomic, assign,class) OpenAdLogLevel logLevel;

@end

NS_ASSUME_NONNULL_END
