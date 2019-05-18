//
//  ARPInput.h
//  BARRender
//
//  Created by yijieYan on 2017/10/23.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface ARPTouchInput : NSObject

- (void)setRenderGestureParseConfig:(NSDictionary *)gesDic;
- (void)onViewGesture:(UIGestureRecognizer *)gesture;
- (void)setClearEvent;

- (void)touchesBegan:(NSSet<UITouch *> *)touches scale:(CGFloat)scale;
- (void)touchesMoved:(NSSet<UITouch *> *)touches scale:(CGFloat)scale;
- (void)touchesEnded:(NSSet<UITouch *> *)touches scale:(CGFloat)scale;
- (void)touchesCancelled:(NSSet<UITouch *> *)touches scale:(CGFloat)scale;

@end
