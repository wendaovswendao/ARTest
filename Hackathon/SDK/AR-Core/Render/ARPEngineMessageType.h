//
//  ARPEngineMessageType.h
//  BARRender
//
//  Created by nick on 16/11/29.
//  Copyright © 2016年 baidu. All rights reserved.
//

#ifndef ARRenderEngineMessage_h
#define ARRenderEngineMessage_h

typedef enum {
    MessageTypeNone                     = -1,
    MessageTypeAll                      = 0,
    
    MessageTypeCaseInitCompleted        = 9,
    MessageTypeStartConfig              = 10,
    MessageTypeUserInteractionConfig    = 11,
    
    MessageTypeTrackFound               = 101,
    MessageTypeTrackLost                = 102,
    MessageTypeTrackFoundHandlerSet     = 103,
    MessageTypeTrackLostHandlerSet      = 104,
    
    MessageTypeModelAppear              = 201,
    MessageTypeModelDisappear           = 202,
    
    //IMU
    MessageTypeIMUOpen                  = 301,
    MessageTypeIMUOpenRes               = 302,
    MessageTypeIMUClose                 = 303,
    MessageTypeIMUCloseRes              = 304,
    MessageTypeIMUResetLocation         = 305,
    MessageTypeIMUMirrorData            = 306,
    
    //SLAM
    MessageTypeSwitchAppType            = 401,
    
    //系统事件
    MessageTypeAppEventForeBackground   = 1090,
    MessageTypeAppEventInterrupt        = 1092,
    MessageTypeAppEventRotation         = 1093,
    
    //音频
    MessageTypeAudioPlay                = 1001,
    MessageTypeAudioPlayResponse        = 1002,
    MessageTypeAudioPause               = 1003,
    MessageTypeAudioPauseResponse       = 1004,
    MessageTypeAudioResume              = 1005,
    MessageTypeAudioResumeResponse      = 1006,
    MessageTypeAudioStop                = 1007,
    MessageTypeAudioStopResponse        = 1008,
    MessageTypeAudioPlayFinish          = 1009,
    MessageTypeAudioPlayFailed          = 1010,
    MessageTypeAudioPlayInfoUpdate      = 1011,
    
    
    //视频
    MessageTypeVideoPlay                = 1021,
    MessageTypeVideoPlayResponse        = 1022,
    MessageTypeVideoPause               = 1023,
    MessageTypeVideoPauseResponse       = 1024,
    MessageTypeVideoResume              = 1025,
    MessageTypeVideoResumeResponse      = 1026,
    MessageTypeVideoStop                = 1027,
    MessageTypeVideoStopResponse        = 1028,
    MessageTypeVideoPlayFailed          = 1029,
    MessageTypeVideoPlayFinish          = 1030,
    MessageTypePlayInfoUpdate           = 1031,
    
    
    //滤镜
    MessageTypePlayFilter               = 1065,
    MessageTypePlayFilterRes            = 1066,
    MessageTypeStopFilter               = 1067,
    MessageTypeStopFilterRes            = 1068,
    MessageTypeUpdateFilter             = 1069,
    MessageTypeUpdateFilterRes          = 1070,
    MessageTypeDisableTechnique         = 1071,
    MessageTypeResetFilter              = 1072,
    MessageTypeDisableTarget            = 1073,
    MessageTypeAdjustFilter             = 1074,
    
    /*管线*/
    MSG_TYPE_HUD_NEED_RECORD            = 1101,
    
    //网页
    MessageTypeOpenURL                  = 1301,
    
    //电话
    MessageTypePhoneCall                = 1401,
    
    //振动
    MessageTypeVibrator                 = 1501,
    
    //分享
    MessageTypeShare                    = 1601,
    
    //统计
    MSG_TYPE_STATISTICS                 = 1801,
    
    /** Lua-SDK Bridge*/
    MessageTypeLuaSdkBridge             = 1901,
    MessageTypeSdkLuaBridge             = 1902,
    
    /** SDK run script*/
    MessageTypeSdkRunScript             = 2001,
    
    /** 模型虚化／实体化 **/
    MessageTypeSdkSetModelColor         = 2002,
    
    //sdk调用lua函数
    MessageTypeSdkCallLuaFuc            = 3001,
    MessageTypeLuaCallSdkFuc            = 3002,
    
    //设备朝向
    MessageTypeDeviceOrientation        = 4001,
    
    //SLAM
    MessageTypeSLAMRelocation           = 4100,
    MessageTypeWaitSlamData             = 4101,
    MessageTypeSlamRelocate             = 4102,
    MessageTypeStartSLAM                = 4200,
    MessageTypeOffscreenGuidanceWork    = 4300,
    
    
    /*资源下载*/
    MessageTypeResRequest               = 5001,
    MessageTypeResResponeProgress       = 5002,
    MessageTypeResRespone               = 5003,
    
    /*模型加载进度*/
    MessageTypeModelLoadProgress        = 6001,
    
    /*ARKit*/
    MessageTypeARkitType                = 10001,
    
    /* 音频 和 视频 状态*/
    Bridge_Msg_Video                    = 5210,
    Bridge_Msg_Audio                    = 5211,
    
    /*weview 消息通信*/
    MessageTypeWebViewOperation         = 10800,
    
    
} MessageType;

#endif /* ARRenderEngineMessage_h */

