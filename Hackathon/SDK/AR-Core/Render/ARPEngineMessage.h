//
//  ARPEngineMessage.h
//  BaiduARSDK
//
//  Created by nick on 16/11/25.
//  Copyright © 2016年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARPEngineMessageType.h"

@interface ARPEngineMessage : NSObject

@property(nonatomic, assign) MessageType msgType;
@property(nonatomic, retain) NSDictionary* data;

@end
