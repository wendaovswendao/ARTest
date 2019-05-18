//
//  ARPScriptEnvPreferenceDelegate.h
//  ARPlayEngine
//
//  Created by Li on 2018/5/25.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ARPScriptDataPersistenceDelegate
@optional
- (void)setValue:(NSString *)value forKey:(NSString *)key ofMode:(NSUInteger)mode;
- (NSString *)getValueForKey:(NSString *)key ofMode:(NSUInteger)mode;
@end
