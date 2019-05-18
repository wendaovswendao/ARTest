//
//  ARPNode+InternalBinding.h
//  ARPlayEngine
//
//  Created by Li on 2018/5/15.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import "ARPNode.h"
#import "ARPScene.h"

#import <application/ar_node.h>
#import "ar_math_all.h"

@interface ARPInternalNodeWrap : NSObject
@property (nonatomic, assign) ae::ARNode *node;
@end

@interface ARPInternalSceneWrap : NSObject
@property (nonatomic, assign) ae::ARScene *scene;
@end
