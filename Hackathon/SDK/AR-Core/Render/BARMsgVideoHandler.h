//
//  BARMsgVideoHandler.h
//  ARSDK
//
//  Created by lusnaow on 06/12/2016.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import "BARMsgBaseHandler.h"
@interface BARMsgVideoHandler : BARMsgBaseHandler
-(void)playVideo:(NSInteger)texture_id videoPath:(NSString*)videoPath;

- (void)startRender;
@end
