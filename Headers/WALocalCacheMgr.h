//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAPackageDownloadLogicDelegate.h"

@class NSMutableDictionary, NSString, WAPackageDownloadLogic, WAPackageInfoCacheLogic;

@interface WALocalCacheMgr : MMService <WAPackageDownloadLogicDelegate, MMService>
{
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    NSMutableDictionary *_dicDownloadingUrlToDownloadInfo;
    NSMutableDictionary *_dicDownloadedTime;
}

+ (void)setupInitializeInfoData:(id)arg1 withAppId:(id)arg2 userName:(id)arg3;
+ (id)getModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (id)getDebugModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (id)getDefaultInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
+ (id)getDebugInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
- (void).cxx_destruct;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (void)removeDownloadInfoWithUrl:(id)arg1;
- (id)allDownloadInfo;
- (id)getDownloadInfoWithUrl:(id)arg1;
- (void)setDownloadInfo:(id)arg1 withUrl:(id)arg2;
- (double)getDownloadTime:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (_Bool)hasLocalCacheDataWithFullUrl:(id)arg1;
- (_Bool)isNeedDownloadDebugModePkgWithDebugInfo:(id)arg1;
- (_Bool)isNeedDownloadDebugModePkg:(id)arg1;
- (void)removeDustPkgWithoutLastTwoPkgWithAppID:(id)arg1 oldVersion:(unsigned long long)arg2 newVersion:(unsigned long long)arg3;
- (_Bool)updateWeAppInfoData:(id)arg1;
- (void)onUpdateDataRecordWhenGetValidPkg:(id)arg1;
- (void)reportDownloadResult:(_Bool)arg1 patch:(_Bool)arg2 infoData:(id)arg3;
- (void)notifyOnCompleteExtension:(_Bool)arg1 errorCode:(unsigned int)arg2 errorMsg:(id)arg3 pkgUrl:(id)arg4;
- (void)onDownloadTaskRecordTime:(double)arg1 appId:(id)arg2;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 taskUrl:(id)arg3;
- (void)downloadAppPkgWithDownloadInfo:(id)arg1 realDownloadUrl:(id)arg2;
- (_Bool)downloadAppPkgWithAppInfoData:(id)arg1 fullPkgUrl:(id)arg2 patchUrlStr:(id)arg3;
- (_Bool)isDownloadingWithInfoData:(id)arg1;
- (_Bool)isDownloadingWithThisFullPkgDownloadURL:(id)arg1 orPatchUrl:(id)arg2;
- (void)clearAllPkgInfoWhenNoAppRunning;
- (_Bool)tryLoadReleasePkgInfoLocalCacheWithContact:(id)arg1;
- (_Bool)loadPkgInfoLocalCache:(id)arg1;
- (void)unloadPkgLocalCacheIfDifferentPackageType:(id)arg1;
- (_Bool)hasLoadPkgInfoLocalCache:(id)arg1;
- (_Bool)verifyLocalCacheChecksum:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

