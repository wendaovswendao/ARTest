//
//  BARPerformerController.h
//  BARRender
//
//  Created by lusnaow on 13/01/2018.
//  Copyright © 2018 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BARPerformanceMonitor.h"
@interface BARPerformerController : NSObject<BARPerformanceMonitorDelegate>
-(BARPerformanceItem*)performanceItem;
-(void)registerPerformer;
-(void)removePerformer;
-(void)runTask:(void(^)(void))taskBlock completionBlock:(void(^)(void))compBlock;  
@end
