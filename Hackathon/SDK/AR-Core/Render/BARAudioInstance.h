//
//  BARAudioInstance.h
//  ARSDK
//
//  Created by lusnaow on 8/14/15.
//  Modified by Xuexing,Zheng on 04/09/2018.
//  Copyright (c) 2015 Baidu. All rights reserved.
//
/** 功能描述
 *  1.支持lua层设置fromtime
 *  2.外部配置项:后台运行、是否允许播放(默认为否)、是否录音
 *  3.音频播放生命周期控制函数
 */

#import <Foundation/Foundation.h>

typedef enum{
    BARAudioInstanceStatusInit,
    BARAudioInstanceStatusPlaying,
    BARAudioInstanceStatusPauseByUser,
    BARAudioInstanceStatusPauseBySystem,
    BARAudioInstanceStatusStop
} BARAudioInstanceStatus;

typedef void (^BARSoundPlayFinishCallback)(BOOL successfully);

@interface BARAudioInstance : NSObject
@property(nonatomic, copy) BARSoundPlayFinishCallback finishCallback;
@property(assign, nonatomic) BARAudioInstanceStatus status;
@property(assign, nonatomic) BOOL enableAudioTrackRecord;
@property (nonatomic, assign) BOOL isInBackGround;
@property (nonatomic, assign) BOOL canPlaying;

+ (BARAudioInstance *)sharedInstance;

- (void)playFileAtPath:(NSString *)filePath Loops:(NSInteger)loop andMsgData:(NSDictionary *)MsgData;
- (void)play;
- (void)pause;
- (void)pauseBySystem;
- (void)resume;
- (void)stop;
- (void)reset;

- (NSUInteger)getAudioDuration;
- (NSUInteger)getCurrentTime;

- (void)setSilence;
- (void)setNormal;

@end

