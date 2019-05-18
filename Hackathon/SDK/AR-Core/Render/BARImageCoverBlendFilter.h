//
//  BARImageCoverBlendFilter.h
//  BARRender
//
//  Created by yuxin on 2017/10/22.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import "BARImageFilter.h"

typedef NS_ENUM(NSUInteger, BARInputStreamMode) {
    BARInputStreamModePushAndPull,
    BARInputStreamModeTwoPull,
    BARInputStreamModeTwoPush,
    BARInputStreamModeOnePull
};

/**
 *  @brief  融合被动的数据。比如引擎渲染结果 不能主动tick滤镜链
 */
@interface BARImageCoverBlendFilter : BARImageFilter
{
    BARImageFramebuffer *secondInputFramebuffer;
    
    GLint filterSecondTextureCoordinateAttribute;
    GLint filterInputTextureUniform2;
    GLint firstTextureFailUniform,secondTextureFailUniform;
    BARImageRotationMode inputRotation2;
    CMTime firstFrameTime, secondFrameTime;
    NSString *fragmentShader;
    NSString *vertexShader;
    
    BOOL hasSetFirstTexture, hasReceivedFirstFrame, hasReceivedSecondFrame, firstFrameWasVideo, secondFrameWasVideo;
    BOOL hasRefreshFirstFrame,hasRefreshSecondFrame;
    
    BOOL firstFrameCheckDisabled, secondFrameCheckDisabled;
    
}
@property (nonatomic, assign) BARInputStreamMode inputStreamMode;

//当inputStreamMode为BARInputStreamModePushAndPull和BARInputStreamModeTwoPull时，使用此函数驱动管线更新
- (void)updateAtTime:(CMTime)frameTime;

//默认 YES，当inputStreamMode为BARInputStreamModeTwoPull时，这个参数无效。
- (void)setSecondFrameCheck:(BOOL)enable;

//默认 YES，当inputStreamMode为BARInputStreamModeTwoPull时，这个参数无效。
- (void)setFirstFrameCheck:(BOOL)enable;

//当inputStreamMode为BARInputStreamModeTwoPull时，这个参数无效。
- (void)disableFirstFrameCheck;

//当inputStreamMode为BARInputStreamModeTwoPull时，这个参数无效。
- (void)disableSecondFrameCheck;

@end
