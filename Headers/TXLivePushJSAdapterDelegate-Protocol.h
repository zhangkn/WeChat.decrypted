//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol TXLivePushJSAdapterDelegate <NSObject>

@optional
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPushNetStatus:(NSDictionary *)arg1 pusherId:(unsigned int)arg2;
- (void)onPushEvent:(int)arg1 pusherId:(unsigned int)arg2 param:(NSDictionary *)arg3;
@end

