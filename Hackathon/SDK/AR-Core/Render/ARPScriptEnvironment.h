//
//  ARPScriptEnvironment.h
//  ARPlayEngine
//
//  Created by Li on 2018/5/28.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARPScriptDataPersistenceDelegate.h"

@interface ARPScriptEnvironment : NSObject

/*!
 @property persistenceDelegate
 @abstract the delegate witch implements the data persistence supporting for the scripts.
 */
@property(nonatomic, weak) id<ARPScriptDataPersistenceDelegate> persistenceDelegate;

/*!
 @method runScriptlet:
 @abstract An interface to run script snippet.
 @discussion The return value can be an object of NSNumber/NSString/NSDictionary class, or nil when
 the corresponding data is not found.
 @discussion This method must be called in gl rendering thread!
 */
- (void)runScriptSnippet:(NSString *)scriptSnippet;

/*!
 @method setSharedEnvironmentValue: forKey:
 @abstract share data to the engine scripting environment by key-value.
 @discussion The value can be an object of NSNumber/NSString/NSDictionary class, data of other type
 will be ignored.
 */
- (void)sharedEnvironmentSetValue:(id)value forKey:(NSString *)key;

/*!
 @method sharedEnvironmentValueForKey:
 @abstract get data from the engine scripting environment by key.
 @discussion The return value can be an object of NSNumber/NSString/NSDictionary class, or nil when
 the corresponding data is not found.
 */
- (id)sharedEnvironmentGetValueForKey:(NSString *)key;

/*!
 @method dataPipeSetValue: forKey:
 @abstract share algrithm / sensor data to the engine scripting by the "data-pipe"
 @discussion The value can be an object of NSNumber/ARPNumber/NSString/NSDictionary/NSArray class,
 data of other type will be ignored.
 */
- (void)dataPipeSetValue:(id)value forKey:(NSString *)key;


@end
