//
//  OpenAd.h
//  OpenAdSDK
//
//  Created by fyl on 2022/10/18.
//

#import <Foundation/Foundation.h>
#import "OpenAdConst.h"


NS_ASSUME_NONNULL_BEGIN


//隐私设置需要初始化前设置
@interface OpenAdConfigModel : NSObject

/// required 应用 id
@property(nonatomic,copy)NSString *appID;

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

/// optional 禁止 IDFA情况下,用户传入自定义字符串,透传给三方广告平台
@property(nonatomic,copy)NSString *customIDFA;


/// optional
/*
 当前手机上的安装app列表,一个字符串数组
 */
@property(nonatomic,strong)NSArray<NSString *> *appList;

/// optional
/*
 CAID 数组对象 数组元素为 dic 格式如下:
 @[@{
 @"caid":@"Caid id",
 @"version":@"Caid version"
 }];
 */
@property(nonatomic,strong)NSArray *CAIDList;

@end


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

/// 控制台log级别
/// 0 不打印  默认
/// 1 打印
@property (nonatomic, assign,class) OpenAdLogLevel logLevel;

@end

NS_ASSUME_NONNULL_END
