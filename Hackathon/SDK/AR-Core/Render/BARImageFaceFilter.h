//
//  BARImageEngineFilter.h
//  BARRender
//
//  Created by yuxin on 2017/10/22.
//  Copyright © 2017年 baidu. All rights reserved.
//

#ifdef ENABLE_FACE

#import <Foundation/Foundation.h>
#import "BARImageFilter.h"

@interface BARImageFaceFilter : BARImageFilter
{
    CGSize pixelSizeOfImage;
    BOOL hasProcessedImage;
    BARImageRotationMode outputRotation;
}

@property (nonatomic) int32_t frameRate;
@property (nonatomic, strong) BARImageFramebuffer *engineFramebuffer;
@property (nonatomic, strong) BARImageFramebuffer *cacheFramebuffer;

- (id)initWithFBOSize:(CGSize)size;

- (void)setInputSize:(CGSize)newSize;

//驱动数据更新到cache
- (void)updateAtTime:(CMTime)frameTime;

//清除cacheframebuffer
- (void)clearCache;

//清除engineframebuffer
- (void)clearEngineFBO;

@end


#endif
