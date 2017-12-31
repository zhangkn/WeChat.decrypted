//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

@class NSString, WAReportBaseItem;

@interface WAWebViewPlugin_ReportPageEvent : WAWebViewPluginBase
{
    unsigned long long m_clickTimeStamp;
    WAReportBaseItem *_baseItem;
    NSString *_referpagepath;
}

@property(copy, nonatomic) NSString *referpagepath; // @synthesize referpagepath=_referpagepath;
- (void).cxx_destruct;
- (void)reportWeAppGameRenderEvent:(unsigned int)arg1 eventType:(unsigned int)arg2 eventValue:(unsigned int)arg3 gameDuration:(long long)arg4;
- (_Bool)reportPublicJSInsideIDKeyInfo:(unsigned int)arg1 withKey:(unsigned int)arg2 andValue:(unsigned int)arg3;
- (_Bool)reportPublicJSInsideKVInfo:(unsigned int)arg1 andValue:(id)arg2;
- (_Bool)reportPageEventFrom3rdProvideInfoWithKey:(id)arg1 andValue:(id)arg2;
- (_Bool)isChildTabVC;
- (id)presentingPagePathForReport;
- (void)clearPresentingReferPagePath;
- (id)presentingReferPagePath;
- (unsigned long long)appstate;
- (unsigned long long)useState;
- (unsigned int)getAppType;
- (unsigned long long)appVersion;
- (id)getCurrentUrl;
- (id)userName;
- (id)getAppID;
- (void)reportWAWebViewPageNotFound;
- (void)reportWeAppForwardMessage:(id)arg1;
- (void)reportWAJSApiResult:(id)arg1 forEvent:(unsigned int)arg2;
- (void)reportWAJSApiResult:(id)arg1 result:(id)arg2;
- (void)reportWebviewMenuAction:(unsigned long long)arg1 actionResult:(unsigned long long)arg2 actionNote:(id)arg3 errCode:(int)arg4;
- (id)getReportBaseItemFromWebview;

@end

