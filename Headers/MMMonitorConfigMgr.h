//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INewABTestMgrExt.h"
#import "ReportStrategyExt.h"

@class NSMutableDictionary, NSString;

@interface MMMonitorConfigMgr : NSObject <ReportStrategyExt, INewABTestMgrExt>
{
    NSMutableDictionary *m_dicMainThreadMonitorCongfig;
    NSString *_autoUploadConfigString;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *autoUploadConfigString; // @synthesize autoUploadConfigString=_autoUploadConfigString;
- (void).cxx_destruct;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (id)getDateStringFromDate:(id)arg1;
- (unsigned int)UinHash:(unsigned int)arg1;
- (_Bool)isHitSample:(double)arg1;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (int)getDeviceUnder;
- (unsigned int)getPerStackInterval;
- (unsigned long long)getFrameDropLimit;
- (void)saveMainThreadHandle:(_Bool)arg1 withFrameDropLimit:(unsigned long long)arg2 withPerStackInterval:(unsigned long long)arg3 withDeviceUnder:(int)arg4;
- (_Bool)getMainThreadHandle;
- (void)saveIsMonitorState:(_Bool)arg1;
- (_Bool)saveAlreadyUploadCnt:(unsigned long long)arg1;
- (unsigned long long)getAlreadyUploadCnt;
- (unsigned long long)getReportEnv;
- (unsigned long long)getOneTimeUpload;
- (unsigned long long)getMaxDailyReport;
- (_Bool)getIsAutoReport;
- (float)getCPUUsagePercent;
- (unsigned int)getCheckPeriodTime;
- (unsigned long long)getRunloopTimeOut;
- (_Bool)getIsMonitor;
- (_Bool)isIPXXExpired;
- (void)onStategy:(id)arg1;
- (void)onIPXX:(id)arg1;
- (void)onIPXXReportBlockDump:(id)arg1;
- (void)onIPXXStrategy:(id)arg1;
- (_Bool)parseCommonNode:(struct XmlReaderNode_t *)arg1 toConfig:(id)arg2;
- (_Bool)updateAlreadyUploadCnt;
- (id)getConfigFilePath;
- (void)saveDumpReportConfig;
- (void)loadConfig;
- (void)dealloc;
- (void)lazyInitiateConfigMgr;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

