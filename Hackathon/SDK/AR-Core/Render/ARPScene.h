//
//  ARPScene.h
//  ARPlayEngine
//
//  Created by Li on 2018/3/20.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import "ARPNode.h"
#import "ARPCamera.h"
@class ARPInternalSceneWrap;

@interface ARPScene : ARPNode

/*!
 @property activeCamera
 @abstract returns the active perspective scene camera
 */
@property(nonatomic, strong, readonly, nullable) ARPCamera * activeCamera;

/*!
 @name rootNode
 @abstract returns the root node of the scene
 */
@property(nonatomic, strong, readonly, nullable) ARPNode *rootNode;

/*!
 @name rootNode
 @abstract get the sub node by name
 */
- (ARPNode *_Nullable)getNodeByName:(NSString *_Nullable)name;


#pragma mark - For Internal Use Only
//~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~
- (void)setInternal:(ARPInternalSceneWrap *_Nullable)nodeWrap;

- (void)relocate;

/*
 @method setVisible
 @parameter isVisible
 */
+ (void)setVisible:(BOOL)isVisible;

@end
