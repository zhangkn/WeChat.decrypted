//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, TXIVideoDecoder;

@interface TXCVideoDecoder : NSObject
{
    TXIVideoDecoder *_videoDecoder;
    NSObject<OS_dispatch_queue> *_decoderQueue;
}

+ (id)decoder:(long long)arg1 needSortFrame:(_Bool)arg2;
- (void).cxx_destruct;
- (long long)getCacheFrameCount;
- (void)setNotifyDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (long long)pushNal:(id)arg1;
- (long long)stop;
- (long long)start:(_Bool)arg1;
- (void)dealloc;
- (id)initBy:(long long)arg1 needSortFrame:(_Bool)arg2;

@end
