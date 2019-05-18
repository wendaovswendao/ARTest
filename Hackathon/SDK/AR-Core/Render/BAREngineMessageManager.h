//
//  BAREngineMessageManager.h
//  ARSDK
//
//  Created by yuxin on 2016/12/2.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARPEngineMessageType.h"
#import "NSObject+AREngineMessageExt.h"
#import "ARPEngineMessage.h"

#define kNotificationNameMessageFromEngine @"NotificationNameMessageFromEngine"
//
@class ARPEngineMessage;

//需要监听的类实现该协议
@protocol BARMessageHandle <NSObject>

- (void)handleMessage:(ARPEngineMessage *)message;

@end

@class BARMessageHandle;

@interface BAREngineMessageManager : NSObject

+ (instancetype)sharedInstance;

//注册
- (void)addObserverWithHandle:(id<BARMessageHandle>)handle;

//注册指定类型消息
//- (void)addObserverWithHandle:(id<BARMessageHandle>)handle types:(NSArray *)types;

//取消
- (void)removeObserverWithHandle:(id<BARMessageHandle>)handle;

//向引擎发送消息
- (void)sendMessageWithHandle:(id<BARMessageHandle>)handle message:(ARPEngineMessage *)message;

//清空监听池
- (void)removeAllObservers;

@end
