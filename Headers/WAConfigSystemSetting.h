//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface WAConfigSystemSetting : NSObject
{
    NSDictionary *_dicSetting;
}

- (void).cxx_destruct;
- (id)httpSetting;
- (unsigned int)widgetImageFlowLimitMaxSize;
- (unsigned int)widgetImageFlowLimitDuration;
- (unsigned int)deadThreadBanDuration;
- (unsigned int)deadThreadMaxTimeToLive;
- (unsigned int)getValidStarNumberLimitation;
- (unsigned int)defaultStarNumberLimitation;
- (unsigned int)starNumberLimitation;
- (unsigned int)defaultAttrSyncForceUpdateTime;
- (unsigned int)attrSyncForceUpdateTime;
- (unsigned long long)defaultLocalStorageItemMaxSize;
- (unsigned long long)localStorageItemMaxSize;
- (unsigned long long)defaultCacheTotalFileMaxSize;
- (unsigned long long)cacheTotalFileMaxSize;
- (_Bool)containSyncLaunchScene:(unsigned int)arg1;
- (id)defaultSyncLaunchSceneList;
- (id)syncLaunchSceneList;
- (_Bool)reloadTaskWithScene:(unsigned int)arg1 homePath:(_Bool)arg2;
- (unsigned int)gameAppMaxRunningCount;
- (unsigned int)defaultAppMaxRunningCount;
- (unsigned int)appMaxRunningCount;
- (id)defaultCDNBaseURL;
- (id)cdnBaseURL;
- (long long)gamePerfCollectInterval;
- (double)gamePerfCollectSamplePercentage;
- (id)subContextImgDomainList;
- (unsigned int)nativeBufferQueueLimitByte;
- (unsigned int)nativeBufferSizeLimitByte;
- (unsigned int)defaultAppServiceMaxDataSize;
- (unsigned int)appServiceMaxDataSize;
- (unsigned long long)gameDownloadFileMaxSize;
- (unsigned long long)defaultDownloadFileMaxSize;
- (unsigned long long)downloadFileMaxSize;
- (unsigned int)downloadFileMaxTimeoutMS;
- (unsigned int)uploadFileMaxTimeoutMS;
- (unsigned int)webSocketMaxTimeoutMS;
- (unsigned int)requestMaxTimeoutMS;
- (id)defaultPreloadHttpHeaderReferer;
- (id)defaultHttpHeaderReferer;
- (id)httpHeaderReferer;
- (id)httpHeaderWhiteList;
- (id)httpHeaderBlackList;
- (id)httpHeaderMode;
- (id)initWithSetting:(id)arg1;

@end
