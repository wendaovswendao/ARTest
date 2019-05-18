//
//  IDLSingleton.h
//  idlFrame
//
//  Created by Nick(xuli02) on 15/1/23.
//  Copyright (c) 2015年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - Macros

#undef	BAR_SINGLETON_DEC
#define BAR_SINGLETON_DEC( __class ) \
+ (__class *)sharedInstance;

#undef	BAR_SINGLETON_DEF
#define BAR_SINGLETON_DEF( __class ) \
+ (__class *)sharedInstance \
{ \
static dispatch_once_t once; \
static __class * __singleton__; \
dispatch_once( &once, ^{ __singleton__ = [[__class alloc] init]; } ); \
return __singleton__; \
}

@interface BARSingleton : NSObject

@end
