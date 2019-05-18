//
//  BARDispatch.h
//  BARRender
//
//  Created by yuxin on 2017/11/20.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface BARDispatch : NSObject

@property (nonatomic, strong) CADisplayLink *displayLink;
@property (nonatomic, assign) NSInteger preferredFramesPerSecond;
@property (nonatomic, assign) BOOL shouldDropFrame;

+ (BARDispatch *)shareInstance;

//每个渲染循环更新状态
- (void)updateFrameLoop;

//开启调度定时器
- (void)startTick;

//暂停调度定时器
- (void)pauseTick;

//销毁调度定时器
- (void)destoryDisplayLink;

//重置调度数据
- (void)resetData;

@end
