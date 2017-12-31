//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol MMVideoPlayerViewDelegate <NSObject>

@optional
- (_Bool)isForground;
- (void)enableWebViewScroll:(_Bool)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id <WAStreamPlayerInterface>)arg3;
- (void)onVideoEvent:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)onVideoStateChange:(long long)arg1;
- (void)onVolumeChange:(double)arg1;
@end

