//
//  BARMsgBaseModel.h
//  ARSDK
//
//  Created by lusnaow on 05/12/2016.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARPEngineMessageType.h"
#import "ARPEngineMessage.h"
@interface BARMsgBaseModel : NSObject
@property(nonatomic, assign) MessageType msgType;
-(id)initWithAREngineMessage:(ARPEngineMessage*)param;
@property(nonatomic,strong) NSString* msgID;
@end
