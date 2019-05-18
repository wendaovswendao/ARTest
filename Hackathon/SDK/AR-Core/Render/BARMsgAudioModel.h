//
//  BARMsgAudioModel.h
//  ARSDK
//
//  Created by lusnaow on 05/12/2016.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import "BARMsgBaseModel.h"

@interface BARMsgAudioModel : BARMsgBaseModel
@property(nonatomic,strong) NSDictionary* originData;
@property(nonatomic,strong) NSString* url;
@property(nonatomic,assign) int loop;
@property(nonatomic,assign) float delay;
@end
