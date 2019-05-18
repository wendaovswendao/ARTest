//
//  ARPInteractionConfig.h
//  ARPlayEngine
//
//  Created by Zhang,Yan(ARL) on 2018/4/13.
//  Copyright © 2018年 baidu. All rights reserved.
//

@interface ARPInteractionConfig : NSObject

//设定平面移动模型下的移动平面
+ (void)setMovePlane:(float)nx ny:(float)ny nz:(float)nz distance:(float)distance;

@end
