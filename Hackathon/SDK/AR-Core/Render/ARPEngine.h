//
//  ARPEngine.m
//  ARPEngine
//
//  Created by nick on 16/11/24.
//  Copyright © 2016年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#import "ARPScene.h"
#import "ARPScriptEnvironment.h"

#define kBARNotificationEngineInitFinish @"BAREngineInitFinish"
#define kBARNotificationEngineDeallocFinish @"BARGLDeallocFinish"
#define kBARNotificationEngineFirstFrameReady @"BAREngineFirstFrameReady"

typedef void(^ARPInteractionFinishBlock)(float argv1, float argv2, float argv3);


@interface ARPEngine:NSObject

@property(nonatomic, strong) EAGLContext *renderingContext;

@property(nonatomic, strong) EAGLContext *glResourceLoadingContext;

@property(nonatomic, strong) ARPScriptEnvironment *scriptEnvironment;

@property(nonatomic, strong, readonly) ARPScene *currentScene;

+ (NSString *)version;

- (BOOL)createSceneAppWithViewPortSize:(CGSize)size
                           previewSize:(CGSize)previewSize
                          resourcePath:(NSString *)resourcePath
                           environment:(NSDictionary *)environmentDic
                  andInteractionConfig:(NSDictionary *)interactionConfigDic;

- (BOOL)configFrameBuffers:(int[3])frameBuffers;
- (void)update;
- (void)pause;
- (void)resume;
- (void)clear;
- (void)reset;
- (void)destroySceneApp;

- (void)setInteractionFinishBlock:(ARPInteractionFinishBlock)callBack;

- (BOOL)isPausedByUser;
- (void)pauseScene;

@end

