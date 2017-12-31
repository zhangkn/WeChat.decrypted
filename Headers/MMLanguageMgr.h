//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt.h"
#import "MMService.h"

@class NSBundle, NSString;

@interface MMLanguageMgr : MMService <IClearDataMgrExt, MMService>
{
    NSString *m_nsCurSystemLanguage;
    NSString *m_curLanguage;
    NSBundle *m_curBundle;
    NSBundle *m_updateBundle;
    NSBundle *m_backupBundle;
    NSBundle *m_updateBackupBundle;
    _Bool bDownloadPackageRightNow;
}

- (void).cxx_destruct;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (_Bool)isVersionString:(id)arg1 olderThanMajor:(unsigned int *)arg2 minor:(unsigned int *)arg3 minorex:(unsigned int *)arg4;
- (void)ClearOlderVersionData;
- (void)refreshNewVersionForCurLanguage:(id)arg1 fromViewScene:(unsigned int)arg2;
- (void)setCurLanguage:(id)arg1 shouldChangeMainFrame:(_Bool)arg2;
- (void)setCurLanguage:(id)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
- (_Bool)curLanguageIsChineseTraditional;
- (_Bool)curLanguageIsChinese;
- (id)getStringForLanguage:(id)arg1 withID:(id)arg2 defaultTo:(id)arg3;
- (id)getStringForCurLanguage:(id)arg1 defaultTo:(id)arg2;
- (id)getStringForCurLanguage:(id)arg1 defaultString:(id)arg2;
- (id)getStringForCurLanguageWithBackupBundle:(id)arg1 defaultTo:(id)arg2 table:(id)arg3;
- (id)getSupportedLanguageDisplayNames;
- (id)getSupportedLanguages;
- (id)getCurLanguageDisplayName;
- (id)getCurLanguage;
- (id)getCurBundle;
- (void)dealloc;
- (id)init;
- (void)initLanguage;
- (_Bool)isLanaguageValid;
- (void)initBackUpLanguage;
- (_Bool)ifNeedBackupBundle;
- (id)getBackUpLanguage;
- (id)isSupportedLanguage:(id)arg1;
- (id)getRealCurSystemLanguage;
- (id)getCurSystemLanguage;
- (id)trimForiOS9Plus:(id)arg1;
- (void)internalSetCurLanguage:(id)arg1;
- (id)internalGetCurLanguage;
- (id)getLanguagePath;
- (id)getLangPackageFileForLang:(id)arg1;
- (id)getLangPackagePathForLang:(id)arg1;
- (id)getLangPackageRootPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

