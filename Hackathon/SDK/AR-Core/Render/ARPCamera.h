//
//  ARPCamera.h
//  ARPlayEngine
//
//  Created by Li on 2018/3/20.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import "ARPNode.h"

typedef enum {
    ARPCameraTypePerspective,
    ARPCameraTypeOrthographic,
} ARPCameraType;

@interface ARPCamera : ARPNode

/*!
 @method getDefaultCamera:
 @abstract get the default camera instance which allways refers to the active camera of the active scene
 */
+ (ARPCamera *)getDefaultCamera;

/*!
 @property cameraType
 @abstract Determines the receiver's type, perspective or orthographic
 */
@property(nonatomic, readonly) ARPCameraType cameraType;

/*!
 @property viewMatrix
 @abstract Determines the receiver's view matrix
 */
@property(nonatomic) GLKMatrix4 viewMatrix;

/*!
 @property fieldOfView
 @abstract Determines the receiver's field of view (in degree)
 @discussion defaults to 56°.
 */
@property(nonatomic) CGFloat fieldOfView;

/*!
 @property zNear
 @abstract Determines the receiver's near value. Animatable.
 @discussion The near value determines the minimal distance between the camera and a visible surface. If a surface is closer to the camera than this minimal distance, then the surface is clipped. The near value must be different than zero. Defaults to 1.
 */
@property(nonatomic) CGFloat zNear;

/*!
 @property zFar
 @abstract Determines the receiver's far value. Animatable.
 @discussion The far value determines the maximal distance between the camera and a visible surface. If a surface is further from the camera than this maximal distance, then the surface is clipped. Defaults to 100.
 */
@property(nonatomic) CGFloat zFar;

#pragma mark - For Internal Use Only
//~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~
+ (void)onSceneAppDestory;

@end
