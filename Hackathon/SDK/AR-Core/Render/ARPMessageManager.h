//
//  ARPMessageManager.h
//  BaiduARSDK
//
//  Created by nick on 16/11/25.
//  Copyright © 2016年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BARSingleton.h"
#import "ARPEngineMessage.h"

@interface ARPMessageManager : NSObject

BAR_SINGLETON_DEC(ARPMessageManager)

- (void)startMonitoring;

- (void)stopMonitoring;

@end
