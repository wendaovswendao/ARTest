//
//  BARPerformanceMonitor.h
//  ARSDK-Pro
//
//  Created by lusnaow on 21/12/2017.
//  Copyright © 2017 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
/*
 * 性能检测
 * 影响帧率的模块向此类注册自己，并实现代理
 *
 */

typedef enum : NSUInteger {
    BARThreadModeSync = 0,
    BARThreadModeAsync,
} BARThreadMode;

typedef enum : NSInteger {
    BARDispatchPriorityDefault = 0,
    BARDispatchPriorityHigh = 2,
    BARDispatchPriorityLow = -2,
} BARDispatchPriority;


@interface BARPerformanceItem : NSObject
@property (nonatomic, assign) BOOL keyPoint;
@property (nonatomic, assign) CGFloat performanceTime;
@property (nonatomic, assign) CGFloat avgFrameTime;
@property (nonatomic, assign) BOOL threadModeLocked;
@property (nonatomic, assign) BARThreadMode threadMode;
@property (nonatomic, assign) BARDispatchPriority dispatchPriority;
@end


@protocol BARPerformanceMonitorDelegate<NSObject>
@required
- (BARPerformanceItem*)performanceItem;
@end

@interface BARPerformanceMonitor : NSObject
@property (nonatomic, assign) CGFloat performanceTimeAVG; //获取当前循环的平均时间
@property (nonatomic, assign) CGFloat keyPoitsTimeAVG; //获取当前循环的平均时间

+ (BARPerformanceMonitor *)shareInstance;

- (void)addPerformer:(id<BARPerformanceMonitorDelegate>)aPerformer;
- (void)removePerformer:(id<BARPerformanceMonitorDelegate>)aPerformer;
- (void)removeAllPerformers;
//获取当前一帧的最长时间
- (CGFloat)getPerformanceTime;

//更新循环平均运行时间
- (void)updateFrameLoop;

- (void)resetPerformanceTime;
//获取当前单帧允许的最大时间,单位ms
- (CGFloat)getMaxFrameTime;

- (NSArray *)getPerformers;

//获取最低优先级的同步任务
- (id<BARPerformanceMonitorDelegate>)getPriorityLowestSyncPerformer;

//获取最快的异步任务
- (id<BARPerformanceMonitorDelegate>)getTimeMinimalAsyncPerformer;

//获取最慢的同步任务
- (id<BARPerformanceMonitorDelegate>)getTimeMaxSyncPerformer;

//重置统计数据
- (void)resetData;

@end
