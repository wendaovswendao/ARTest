//
//  ARPNode.h
//  ARPlayEngine
//
//  Created by Li on 2018/3/20.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

@class ARPInternalNodeWrap;

@interface ARPNode : NSObject

/*!
 @property name
 @abstract Determines the receiver's name.
 */
@property(nonatomic, strong) NSString* _Nullable name;

/*!
 @property transform
 @abstract Determines the receiver's transform.
 @discussion The transform is the combination of the position, rotation and scale defined below. So when the transform is set, the receiver's position, rotation and scale are changed to match the new transform.
 */
@property(nonatomic) GLKMatrix4 transform;

/*!
 @property worldTransform
 @abstract Determines the receiver's transform in world space
 */
@property(nonatomic) GLKMatrix4 worldTransform;

/*!
 @property initialTransform
 @abstract Determines the receiver's initial transform in world space
 */
@property(nonatomic, readonly) GLKMatrix4 initialTransform;

/*!
 @property position
 @abstract Determines the receiver's position.
 */
@property(nonatomic) GLKVector3 position;

/*!
 @property worldPosition
 @abstract Determines the receiver's position in world space
 */
@property(nonatomic) GLKVector3 worldPosition;

/*!
 @property rotation
 @abstract Determines the receiver's rotation.
 @discussion The rotation is quaternion.
 */
@property(nonatomic) GLKQuaternion rotation;

/*!
 @property rotationVec
 @abstract Determines the receiver's rotation axis and angle(radius).
 @discussion The rotation is axis angle rotation. The three first components are the axis, the fourth one is the rotation (in radian).
 */
@property(nonatomic) GLKVector4 rotationVec;

///*!
// @property orientation
// @abstract Determines the receiver's orientation as a unit quaternion.
// */
//@property(nonatomic) GLKQuaternion orientation;

/*!
 @property worldOrientation
 @abstract Determines the receiver's orientation in world space (relative to the scene's root node).
 */
//@property(nonatomic) GLKQuaternion worldOrientation;

/*!
 @property eulerAngles
 @abstract Determines the receiver's euler angles.
 @dicussion The order of components in this vector matches the axes of rotation:
 1. Pitch (the x component) is the rotation about the node's x-axis (in radians)
 2. Yaw   (the y component) is the rotation about the node's y-axis (in radians)
 3. Roll  (the z component) is the rotation about the node's z-axis (in radians)
 SceneKit applies these rotations in the reverse order of the components:
 1. first roll
 2. then yaw
 3. then pitch
 */
@property(nonatomic) GLKVector3 eulerAngles;

/*!
 @property scale
 @abstract Determines the receiver's scale. Animatable.
 */
@property(nonatomic) GLKVector3 scale;

///*!
// @property pivot
// @abstract Determines the receiver's pivot. Animatable.
// */
//@property(nonatomic) GLKMatrix4 pivot;

/*!
 @property worldRotateAxis
 @abstract Determines the receiver's rotate axis.
 */
@property(nonatomic) GLKVector3 worldRotateAxis;

#pragma mark - Node Hierarchy
/*!
 @property parentNode
 @abstract Returns the parent node of the receiver.
 */
@property(nonatomic, readonly, nullable) ARPNode *parentNode;


/*!
 @method childNodeByName
 @abstract get the child node by the specified name.
 */
-(ARPNode *_Nullable)childNodeByName:(NSString *_Nullable)name;


#pragma mark - For Internal Use Only
//~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~
@property(nonatomic, strong, nullable) ARPInternalNodeWrap* internalNodeWrap;

@end
