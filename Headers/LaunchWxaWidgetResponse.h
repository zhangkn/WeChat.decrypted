//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, CheckJsApiInfo, WidgetLaunchAction, WidgetVersionInfo, WxaWidgetSetting;

@interface LaunchWxaWidgetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CheckJsApiInfo *checkJsApi; // @dynamic checkJsApi;
@property(retain, nonatomic) WidgetLaunchAction *launch; // @dynamic launch;
@property(retain, nonatomic) WxaWidgetSetting *setting; // @dynamic setting;
@property(retain, nonatomic) WidgetVersionInfo *versionInfo; // @dynamic versionInfo;

@end

