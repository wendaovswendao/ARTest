//
//  BARMainController+Face.h
//  AR-Base
//
//  Created by Zhao,Xiangkai on 2018/8/2.
//  Copyright © 2018年 Baidu. All rights reserved.
//

#import "BARMainController.h"

@interface BARMainController (Face)

#pragma mark - 滤镜
/**
设置滤镜资源路径和配置路径
 @param bundlePath 资源路径
 @param configPath 配置路径
 */
- (void)setFilterBundlePath:(NSString *)bundlePath configPath:(NSString *)configPath;

/**
 切换滤镜
 @param filterId 滤镜id
 */
- (void)switchFilter:(NSString *)filterId;

/**
 获取滤镜默认值
 @return 默认值
 */
- (CGFloat)getFilterDefaultValue;

/**
 修改滤镜透明度
 @param value 透明度
 */
- (void)adjustFilterValue:(CGFloat)value;


#pragma mark - 人脸

/**
 人脸配置
 @param trackingModelPath 人脸跟踪模型绝路径
 */
- (void)setupFaceWithTrackingModelPath:(NSString *)trackingModelPath;

/**
 修改美型数值
 @param type 美型类型
 @param value 值
 */
- (void)adjustFaceWithType:(BARFaceBeautyType)type value:(CGFloat)value;

/*
 加载人脸配置文件
 @param path 配置文件绝对路径
 */
- (void)loadFaceDefaultConfigWith:(NSString *)path;

/**
 获取人脸配置信息
 @return 配置信息
 */
- (NSDictionary *)getFaceConfigDic;

@end
