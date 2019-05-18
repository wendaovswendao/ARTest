//
//  ARPMessageDataAdapter.h
//  BaiduARSDK
//
//  Created by nick on 16/11/25.
//  Copyright © 2016年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "bridge/map_data.h"

@interface ARPMessageDataAdapter : NSObject

+ (ae::MapData)mapDataFromDictionary:(NSDictionary *)dictionary;
+ (void)fillMapDataWithDictionary:(NSDictionary *)dictionary andMapData:(ae::MapData *)mapData;
+ (NSDictionary *)dictionaryFromMapData:(const ae::MapData &)data;

@end
