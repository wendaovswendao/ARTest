//
//  BARMsgVideoModel.h
//  ARSDK
//
//  Created by lusnaow on 06/12/2016.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import "BARMsgBaseModel.h"

@interface BARMsgVideoModel : BARMsgBaseModel
@property(nonatomic,strong) NSString* url;
@property(nonatomic,assign) int loop;
@property(nonatomic,copy) NSString* texture_id;
@property(nonatomic,strong) NSDictionary* originData;
@end
