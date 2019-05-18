//
//  BARRenderController.h
//  engine
//
//  Created by yuxin on 2017/10/19.
//

#import <AVFoundation/AVFoundation.h>
#import "ARPEngine.h"
#import "BARDispatch.h"
#import "BARPerformerController.h"

#ifdef USE_AR_ENGINE_FMWK
#import <BARImage/BARImage.h>
#else
#import "BARImage.h"
#endif

typedef enum : NSUInteger {
    BAROutputTypeBlend = 0,
    BAROutputTypeVideo,
    BAROutputTypeEngine,
} BAROutputType;

typedef enum : NSUInteger {
    BARPipelineTypeImageView = 0,
    BARPipelineTypeFramebuffer,
} BARPipelineType;

typedef void (^BARRenderCancelBlock)(void);
typedef void (^BARImageInternalRenderCompleteBlock)(BARImageFramebuffer *framebuffer, CMTime sampleBufferTime);
typedef void (^BARRenderControllerInfoBlock)(NSString *info);    // 渲染引擎消息的回调
typedef void (^BARSnapshotBlock)(UIImage *image);

@interface BARRenderController : BARPerformerController

@property (nonatomic, copy) BARImageInternalRenderCompleteBlock renderCompleteBlock;
@property (nonatomic, assign) NSInteger preferredFramesPerSecond;
@property (nonatomic, assign) BOOL appInBackground;
@property (nonatomic, strong) BARImageView *targetView;
@property (nonatomic, strong) BARImageMovieWriter *movieWriter;
@property (nonatomic, assign) BOOL enable;
@property (nonatomic, assign) int devicePosition;                     //0：后置摄像头  1：前置摄像头
@property (nonatomic, retain) ARPEngine *renderer;
@property (nonatomic, strong) NSDictionary *environmentInfo;          //设备用户等信息


// 目前是给调试用的block
@property (nonatomic, copy) BARRenderControllerInfoBlock infoBlock;

//默认初始化
- (id)initWithCameraSize:(CGSize)cameraSize resourcePath:(NSString *)resourcePath environment:(NSDictionary *)environment andInteractionConfig:(NSDictionary *)interactionConfig;

//增加相机预览大小接口
- (id)initWithCameraSize:(CGSize)cameraSize previewSize:(CGSize)previewSize resourcePath:(NSString *)resourcePath environment:(NSDictionary *)environment andInteractionConfig:(NSDictionary *)interactionConfig;

//增加前后摄像头
- (id)initWithCameraSize:(CGSize)cameraSize previewSize:(CGSize)previewSize devicePosition:(int)devicePosition resourcePath:(NSString *)resourcePath environment:(NSDictionary *)environment andInteractionConfig:(NSDictionary *)interactionConfig;

//添加了异步接口
- (id)initWithCameraSize:(CGSize)cameraSize previewSize:(CGSize)previewSize devicePosition:(int)devicePosition resourcePath:(NSString *)resourcePath environment:(NSDictionary *)environment  andInteractionConfig:(NSDictionary *)interactionConfig sync:(BOOL)sync;

//视频帧更新主函数
- (void)updateSampleBuffer:(CMSampleBufferRef)sampleBuffer;
//背景分割更新主函数
- (void)updateSampleBuffer:(CMSampleBufferRef)sampleBuffer
                 maskImage:(GLubyte*)imageBaseAddress
             maskImageSize:(CGSize)maskImageSize
     maskImageRotationMode:(BARImageRotationMode)maskImageRotationMode;

- (void)setBAROutputType:(BAROutputType)type;
- (void)setBARPipelineType:(BARPipelineType)type;

- (void)startRender;
- (void)pauseRender;
- (void)resumeRender;
- (void)resetRender;
- (void)stopRender;
- (void)finishRender;

//MainController中，调用stopAR的时候，使用
- (void)stopMedia;

- (void)switchFilter:(int)filterId type:(int)type;

- (void)takeSnapshot:(BARSnapshotBlock )snapshotBlock;

- (void)setupBgSubFilterPipeline:(NSString*)planeNodeName;

- (void)setupDefaultFilterPipeline;

+ (NSString *)renderEngineVersion;

// 人脸
- (GLint)getFaceFramebuffer;
- (EAGLContext *)getFaceContext;

//设置滤镜资源路径
- (void)setFilterManagerBundlePath:(NSString *)bundlePath configPath:(NSString *)configPath;
- (void)adjustFilterWithFilterDic:(NSDictionary *)filterDic;

- (void)updateFaceFramebufferWithCmTime:(CMTime)cmTime dataInfo:(NSDictionary *)theData;
//- (void)updateBeautyInfo:(NSDictionary *)theDic;

- (instancetype)initWithCameraSize:(CGSize)cameraSize previewSize:(CGSize)previewSize devicePosition:(int)devicePosition;


@end

