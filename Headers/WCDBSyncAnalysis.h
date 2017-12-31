//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDBSyncAnalysisRecord;

@interface WCDBSyncAnalysis : NSObject
{
    WCDBSyncAnalysisRecord *_record;
}

+ (id)currentUserRecordPath;
- (void).cxx_destruct;
- (void)analyze:(id)arg1;
- (void)analyzeCorruptError:(id)arg1;
- (void)analyzeFsyncError:(id)arg1 isFull:(_Bool)arg2;
- (void)clear;
- (id)currentRecord;

@end

