//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURLSessionDownloadTask;

@interface WAPackageDownloadTask : NSObject
{
    _Bool _bIsCdnDownloadType;
    unsigned int _retryCount;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSURLSessionDownloadTask *_downloadTask;
    NSString *_downloadUrl;
    NSString *_downloadHost;
    NSString *_fileName;
    NSString *_directoryPath;
    NSDate *_startDate;
    NSString *_appid;
    unsigned long long _version;
}

@property(nonatomic) _Bool bIsCdnDownloadType; // @synthesize bIsCdnDownloadType=_bIsCdnDownloadType;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *downloadHost; // @synthesize downloadHost=_downloadHost;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (id)initWithDownloadTask:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

