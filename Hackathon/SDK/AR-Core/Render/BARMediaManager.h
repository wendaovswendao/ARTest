//
//  BARMediaManager.h
//  BARRender
//
//  Created by yijieYan on 2017/10/16.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BARMediaManager : NSObject

//- (void)playFileAtPath:(NSString *)playFileAtPath loops:(NSInteger)loops;
- (void)playVideo:(NSInteger)texture_id videoPath:(NSString*)videoPath;
- (void)clearMedia;
- (void)pauseMedia;
- (void)resumeMedia;
- (void)setupMediaWithResourcePath:(NSString *)path;
- (void)startMedia;
- (void)stopMedia;
- (void)setAppInBackground:(BOOL)background;
@end
