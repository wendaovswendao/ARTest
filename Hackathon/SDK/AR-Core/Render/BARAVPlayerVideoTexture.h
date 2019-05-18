//
//  BARAVPlayerVideoTexture.h
//  gl
//
//  Created by lusnaow on 02/12/2016.
//  Modified by Xuexing,Zheng on 04/09/2018.
//  Copyright © 2016 lusnaow. All rights reserved.
//
/** 可能异常：
 *  1.视频无限循环
 *  2.一个case内有4、5个视频同时播放
 *  3.case内快速切换视频播放
 *  4.快速切换前后台
 ** 功能事项：
 *  1.主动刷新与手动刷新
 *  2.在videoDecodeQueue中进行视频解码
 */
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <GLKit/GLKit.h>
#import "BARPerformerController.h"

typedef enum{
    BARVideoPlayerStatusInit,
    BARVideoPlayerStatusPlaying,
    BARVideoPlayerStatusPausedByUser,
    BARVideoPlayerStatusPausedBySystem,
    BARVideoPlayerStatusStop
} BARVideoPlayerStatus;

typedef void (^BARVideoPlayFinishCallback)(BOOL successfully);

@interface BARAVPlayerVideoTexture : BARPerformerController

@property(nonatomic, copy) BARVideoPlayFinishCallback finishCallback;
@property(nonatomic, assign) BARVideoPlayerStatus status;
@property(nonatomic, assign) BOOL enableAudioTrackRecord;
@property(nonatomic, assign) BOOL videoCanPlay;
@property(nonatomic, assign) BOOL autoDecode;

+ (instancetype)sharedInstance;

- (void)playFileAtPath:(NSString*)filePath Loops:(NSInteger)loop andMsgData:(NSDictionary *)MsgData;

- (void)play;
- (void)pauseVideo;
- (void)pauseBySystem;
- (void)resumeVideo;
- (void)stopVideo;

- (BOOL)bindNextFrameTexure:(GLuint)texture;

@end
