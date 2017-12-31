//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MessageObserverDelegate.h"

@class DownloadImageInfo, NSMutableArray;

@interface DownloadImageMgr : MMObject <MessageObserverDelegate>
{
    NSMutableArray *m_arrQueue;
    DownloadImageInfo *m_oCurInfo;
}

@property(retain, nonatomic) DownloadImageInfo *m_oCurInfo; // @synthesize m_oCurInfo;
- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)DownloadFail:(int)arg1;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2;
- (void)HandleDownload:(id)arg1;
- (id)GetTempFilePath:(id)arg1;
- (id)GetFilePath:(id)arg1;
- (_Bool)StopImageDownloadTaskWithMsg:(id)arg1;
- (_Bool)IsDownloading:(id)arg1;
- (_Bool)CreateDownload;
- (_Bool)CreateImplGetImg:(id)arg1;
- (void)CheckQueue;
- (void)StopDownloadImage:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2;
- (void)RemoveInfoFromQueue:(id)arg1;
- (_Bool)CheckMsgIsInQueue:(id)arg1;
- (void)StopCurrentDownload;
- (void)dealloc;
- (id)init;

@end
