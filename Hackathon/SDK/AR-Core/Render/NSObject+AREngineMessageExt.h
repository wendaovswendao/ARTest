//
//  NSObject+ARPEngineMessageExt.h
//  BaiduARSDK
//
//  Created by nick on 16/11/25.
//  Copyright © 2016年 baidu. All rights reserved.
//

#import "ARPEngineMessage.h"
#import <Foundation/Foundation.h>

@interface NSObject (ARPEngineMessageExt)

- (void)sendMessage:(ARPEngineMessage *)message;

//  data:[@"key", value]
//  其中value由NSString/NSNumber/NSDictory/NSArray组成，不能是自定义类型
- (void)sendMessageOfType:(MessageType)type
                  andData:(NSDictionary *)data;

@end
