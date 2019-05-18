//
//  BARImageSamplebuffer.h
//  BARImage
//
//  Created by yuxin on 2017/10/21.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BARImageOutput.h"

@interface BARImageSamplebuffer : BARImageOutput
{
    CGSize pixelSizeOfImage;
    BOOL hasProcessedImage;
    
    dispatch_semaphore_t imageUpdateSemaphore;
    
    NSUInteger numberOfFramesCaptured;
    CGFloat totalFrameTimeDuringCapture;
    
    BOOL capturePaused;
    BARImageRotationMode outputRotation, internalRotation;
    dispatch_semaphore_t frameRenderingSemaphore;
    
    GLuint luminanceTexture, chrominanceTexture;

}

@property (nonatomic) int32_t frameRate;

/// This enables the benchmarking mode, which logs out instantaneous and average frame times to the console
@property(readonly, nonatomic) BOOL runBenchmark;

@property(readwrite, nonatomic) int devicePosition; // 0 后置摄像头  1 前置摄像头  默认0,不做镜像

/// This determines the rotation applied to the output image, based on the source material
@property(readwrite, nonatomic) UIInterfaceOrientation outputImageOrientation;

/// These properties determine whether or not the two camera orientations should be mirrored. By default, both are NO.
@property(readwrite, nonatomic) BOOL horizontallyMirrorFrontFacingCamera, horizontallyMirrorRearFacingCamera;


// Initialization and teardown
- (id)initWithPixelFormatType:(int)type;
- (void)updateSampleBuffer:(CMSampleBufferRef)sampleBuffer;

// Image rendering
- (void)processImage;
- (CGSize)outputImageSize;

- (BARImageRotationMode)getOutputRotation;

/**
 * Process image with all targets and filters asynchronously
 * The completion handler is called after processing finished in the
 * GPU's dispatch queue - and only if this method did not return NO.
 *
 * @returns NO if resource is blocked and processing is discarded, YES otherwise
 */
- (BOOL)processImageWithCompletionHandler:(void (^)(void))completion;
- (void)processImageUpToFilter:(BARImageOutput<BARImageInput> *)finalFilterInChain withCompletionHandler:(void (^)(UIImage *processedImage))block;

@end
