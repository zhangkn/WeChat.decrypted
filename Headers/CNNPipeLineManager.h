//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNNPipeLineDelegate.h"

@class NSMutableDictionary, NSString;

@interface CNNPipeLineManager : NSObject <CNNPipeLineDelegate>
{
    NSMutableDictionary *_pipeLineCache;
}

@property(retain, nonatomic) NSMutableDictionary *pipeLineCache; // @synthesize pipeLineCache=_pipeLineCache;
- (void).cxx_destruct;
- (id)pipelineWithFuncName:(id)arg1 device:(id)arg2 library:(id)arg3 error:(id *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

