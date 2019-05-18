//
//  BARMsgAudioHandler.h
//  ARSDK
//
//  Created by lusnaow on 05/12/2016.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import "BARMsgBaseHandler.h"

@interface BARMsgAudioHandler : BARMsgBaseHandler

- (void)pauseRender;
- (void)resumeRender;
- (void)setNormal;
- (void)setSilence;

- (void)startRender;
@end
