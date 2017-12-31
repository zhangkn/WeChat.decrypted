//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "IMMWebViewReportStatMgrExt.h"

@class BrandActionReportLogicController, NSString, WCStatTimerHelper;

@interface MMWebViewPlugin_ReportPageEvent : MMWebViewPluginBase <IMMWebViewReportStatMgrExt>
{
    NSString *_nsSessionID;
    NSString *_referLoadUrl;
    NSString *_currentLoadUrl;
    unsigned long long _enterPageTime;
    unsigned long long _costLoadTime;
    long long _scene;
    unsigned long long _recentMenuType;
    WCStatTimerHelper *m_oStatTimerHelper;
    unsigned int m_stat_enterTime;
    _Bool _m_isFinishLoaded;
    _Bool _m_isPageLoadFail;
    _Bool _hasCreateBrandActionReport;
    NSString *_m_lastCheckCpKey;
    BrandActionReportLogicController *_m_brandActionReport;
}

+ (void)reportPageInfoWhenForwardMsgOrFav:(id)arg1 actionType:(unsigned long long)arg2 fromScene:(unsigned long long)arg3 ret:(unsigned long long)arg4;
+ (unsigned long long)getCurrentTimeInMs;
+ (unsigned int)getCurrentTimeStamp;
+ (unsigned long long)getNetType;
+ (id)getUserAgent;
@property(retain, nonatomic) BrandActionReportLogicController *m_brandActionReport; // @synthesize m_brandActionReport=_m_brandActionReport;
@property(nonatomic) _Bool hasCreateBrandActionReport; // @synthesize hasCreateBrandActionReport=_hasCreateBrandActionReport;
@property(nonatomic) _Bool m_isPageLoadFail; // @synthesize m_isPageLoadFail=_m_isPageLoadFail;
@property(nonatomic) _Bool m_isFinishLoaded; // @synthesize m_isFinishLoaded=_m_isFinishLoaded;
@property(retain, nonatomic) NSString *m_lastCheckCpKey; // @synthesize m_lastCheckCpKey=_m_lastCheckCpKey;
- (void).cxx_destruct;
- (void)createBrandActionReport;
- (void)reportCloseWebView;
- (void)reportH5PageWrapWhenDealloc:(id)arg1;
- (void)markNeedCheckUrlAndRemoveLastCheckedUrl:(id)arg1;
- (void)onMenuActionRet:(unsigned long long)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)realReportMenuActionWithType:(unsigned long long)arg1 result:(unsigned long long)arg2;
- (void)reportPageEventWhenPageLeft:(_Bool)arg1;
- (id)getCurrentUrl;
- (id)getAppID;
- (void)genSessionID;
- (id)getSessionID;
- (void)reportPageEventWhenClickMenuAction:(unsigned long long)arg1;
- (_Bool)reportPageEventFrom3rdProvideInfoWithKey:(id)arg1 andValue:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

