//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncImageView, NSSet, UIEvent;

@protocol AsyncImageViewDelegate <NSObject>

@optional
- (void)touchesCancelled_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan_AsyncImageView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)onAsyncLoadImageOK:(AsyncImageView *)arg1;
@end
