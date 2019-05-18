//
//  BARMsgBaseHandler.h
//  ARSDK
//
//  Created by lusnaow on 05/12/2016.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BAREngineMessageManager.h"
@interface BARMsgBaseHandler : NSObject<BARMessageHandle>

@property(nonatomic,weak)BAREngineMessageManager* sharedMsgManager;

- (void)handleMessage:(ARPEngineMessage *)message;
- (void)startRender;
- (void)pauseRender;
- (void)stopRender;
- (void)resumeRender;

- (void)prepareRender;
@end
