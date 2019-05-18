//
//  BAREngineMessageParser.h
//  BARRender
//
//  Created by yijieYan on 2017/10/16.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

//#import "BAREngineMessageManager.h"
typedef void (^CaseConfigLoadSuccessBlock)(NSDictionary *configDic);

@interface BAREngineMessageParser : NSObject//<BARMessageHandle>
@property (nonatomic, copy)CaseConfigLoadSuccessBlock caseConfigLoadSuccessBlock;
@end
