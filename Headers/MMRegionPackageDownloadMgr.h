//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMPackageDownloadMgrExt.h"
#import "MMService.h"

@class NSString, Package;

@interface MMRegionPackageDownloadMgr : MMService <MMService, MMPackageDownloadMgrExt>
{
    Package *_cachedPackage;
    unsigned int uiInterval;
}

- (void).cxx_destruct;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (id)getVersionFilePath;
- (id)getRegionFilePathForLang:(id)arg1;
- (id)getTmpRegionFilePathForLang:(id)arg1;
- (id)getRegionFilePath;
- (id)getRegionRootPath;
- (int)getCurrentVersion;
- (void)startDownload:(id)arg1 localVersion:(id)arg2;
- (_Bool)shoulCheckUpadte;
- (void)checkUpdate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

