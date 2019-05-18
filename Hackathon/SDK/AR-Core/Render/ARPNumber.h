//
//  ARPNumber.h
//  ARPlayEngine
//
//  Created by Tony_Q on 2018/6/10.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKMathTypes.h>

@interface ARPNumber : NSObject

+ (GLKQuaternion)glkQuatFromSrcVector3:(GLKVector3)src tarVector3:(GLKVector3)dst;

@end

/**
 * @brief vector2 类型
 *
 */
@interface ARPVec2 : ARPNumber

@property (nonatomic, assign) float x;
@property (nonatomic, assign) float y;

- (instancetype)initWithX:(float)x Y:(float)y;
- (instancetype)initWithGLKVector2:(GLKVector2)vec2;
+ (ARPVec2 *)vec2WithGLKVector2:(GLKVector2)glkVec2;


@end


/**
 * @brief vector3 类型
 *
 */
@interface ARPVec3 : ARPNumber

@property (nonatomic, assign) float x;
@property (nonatomic, assign) float y;
@property (nonatomic, assign) float z;

- (instancetype)initWithX:(float)x Y:(float)y Z:(float)z;
- (instancetype)initWithGLKVector3:(GLKVector3)vec3;
+ (ARPVec3 *)vec3WithGLKVector3:(GLKVector3)glkVec3;

@end

/**
 * @brief vector4 类型
 *
 */
@interface ARPVec4 : ARPNumber

@property (nonatomic, assign) float x;
@property (nonatomic, assign) float y;
@property (nonatomic, assign) float z;
@property (nonatomic, assign) float w;

- (instancetype)initWithX:(float)x Y:(float)y Z:(float)z W:(float)w;
- (instancetype)initWithGLKVector4:(GLKVector4)glkVec4;
+ (ARPVec4 *)vec4WithGLKVector4:(GLKVector4)glkVec4;

@end

/**
 * @brief Matrix4 类型
 *
 */
@interface ARPMat4 : ARPNumber

@property (nonatomic, retain) ARPVec4* x;
@property (nonatomic, retain) ARPVec4* y;
@property (nonatomic, retain) ARPVec4* z;
@property (nonatomic, retain) ARPVec4* w;

+ (ARPMat4 *)mat4WithGLKMatrix4:(GLKMatrix4)glkMat;
- (instancetype)initWithX:(ARPVec4*)x Y:(ARPVec4*)y Z:(ARPVec4*)z W:(ARPVec4*)w;
- (instancetype)initWithColumns:(NSArray<ARPVec4*>*)columns;

@end

